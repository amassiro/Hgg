Generation
====

2018: starting point

    /HWplusJ_HToWWTo2L2Nu_WTo2L_M125_13TeV_powheg_pythia8_TuneCP5_PSweights/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM
    
    https://cms-pdmv.cern.ch/mcm/chained_requests?prepid=HIG-chain_RunIIFall18wmLHEGS_flowRunIIAutumn18DRPremix_flowRunIIAutumn18MiniAOD_flowRunIIAutumn18NanoAODv7-00722&page=0&shown=15
    
And in the pythia decay fragment

    https://cms-pdmv.cern.ch/mcm/public/restapi/requests/get_fragment/HIG-RunIIFall18wmLHEGS-01696
    
change 

            '25:onIfMatch = 24 -24', ## H decay to WW
            '24:mMin = 0.05',           
            '24:onMode = off',          ##off W decay
            '24:onIfMatch = 11 12 ',    ##W to e ve
            '24:onIfMatch = 13 14 ',    ##W to mu vmu
            '24:onIfMatch = 15 16 ',    ##W to tau vtau

into


            '25:onIfMatch = 21 21', ## H decay to gluglu
            '24:mMin = 0.05',           
            '24:onMode = off',          ##off W decay
            '24:onIfMatch = 11 12 ',    ##W to e ve
            '24:onIfMatch = 13 14 ',    ##W to mu vmu
            '24:onIfMatch = 15 16 ',    ##W to tau vtau

            
And for ZH

    /HZJ_HToWWTo2L2Nu_ZTo2L_M125_13TeV_powheg_jhugen714_pythia8_TuneCP5/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM
    jhu -> not ok
    
    
    /ZHToTauTau_M125_13TeV_powheg_pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM
    -> pythia decay fragment
    https://cms-pdmv.cern.ch/mcm/public/restapi/requests/get_fragment/TAU-RunIIFall18wmLHEGS-00005
    
    
    
    
    
    
ZH production:

    GEN: /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/Generation
    
    cmsrel CMSSW_10_2_3
    cd CMSSW_10_2_3/src
    eval `scram runtime -sh`

    curl -s -k https://cms-pdmv.cern.ch/mcm/public/restapi/requests/get_fragment/TAU-RunIIFall18wmLHEGS-00005 --retry 3 --create-dirs -o Configuration/GenProduction/python/TAU-RunIIFall18wmLHEGS-00005-fragment.py
    
    --> copied here:
    cp     Configuration/GenProduction/python/TAU-RunIIFall18wmLHEGS-00005-fragment.py \
           Configuration/GenProduction/python/RunIIFall18wmLHEGS-00000-fragment.py
    
    
    scramv1 b -j 20
    
    
    EVENTS=54

    SEED=$(($(date +%s) % 100 + 1))

    cmsDriver.py Configuration/GenProduction/python/RunIIFall18wmLHEGS-00000-fragment.py --python_filename RunIIFall18wmLHEGS-00000_1_cfg.py --eventcontent RAWSIM,LHE  \
            --customise Configuration/DataProcessing/Utils.addMonitoring --datatier GEN-SIM,LHE --fileout file:RunIIFall18wmLHEGS-00000.root \
            --conditions 102X_upgrade2018_realistic_v11 --beamspot Realistic25ns13TeVEarly2018Collision --customise_commands   \
            process.RandomNumberGeneratorService.externalLHEProducer.initialSeed="int(${SEED})"\\nprocess.source.numberEventsInLuminosityBlock="cms.untracked.uint32(100)" \
            --step LHE,GEN,SIM --geometry DB:Extended --era Run2_2018 --no_exec --mc -n $EVENTS

    cmsRun RunIIFall18wmLHEGS-00000_1_cfg.py
    
    