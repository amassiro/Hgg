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
         /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/Generation/CMSSW_10_2_3/src/
    
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
 
 
Test LHE:

    https://twiki.cern.ch/twiki/bin/viewauth/CMS/LHEReaderCMSSW
    
    Example:
    
    <event>
      8  10001  8.38428E-01  1.78676E+01 -1.00000E+00  1.67468E-01
      -2    -1     0     0     0   502  0.000000000E+00  0.000000000E+00  2.254740018E+01  2.254740018E+01  0.000000000E+00  0.00000E+00  9.000E+00
       2    -1     0     0   501     0  0.000000000E+00  0.000000000E+00 -2.442664988E+03  2.442664988E+03  0.000000000E+00  0.00000E+00  9.000E+00
      25     1     1     2     0     0  4.853680580E+01  5.753701389E+01 -1.418217137E+03  1.425703680E+03  1.249992303E+02  0.00000E+00  9.000E+00
      23     2     1     2     0     0 -6.069712112E+01  6.369283164E+01 -6.596754801E+02  6.715097212E+02  8.951340310E+01  0.00000E+00  9.000E+00
      -1     1     4     4     0   503 -3.406740445E+01 -1.782319133E+01 -1.620412500E+02  1.665404750E+02  3.300000000E-01  0.00000E+00  9.000E+00
       1     1     4     4   503     0 -2.662971667E+01  8.151602297E+01 -4.976342301E+02  5.049692462E+02  3.300000000E-01  0.00000E+00  9.000E+00
      -5     1     1     2     0   502  1.770141994E+01 -1.082835507E+02 -2.309114519E+02  2.556977292E+02  4.750000000E+00  0.00000E+00  9.000E+00
       5     1     1     2   501     0 -5.541104619E+00 -1.294629485E+01 -1.113135187E+02  1.123012570E+02  4.750000000E+00  0.00000E+00  9.000E+00

       
       
      <event>
      8  10001  8.38428E-01  2.70253E+01 -1.00000E+00  1.53711E-01
       1    -1     0     0   501     0  0.000000000E+00  0.000000000E+00  2.174718378E+03  2.174718378E+03  0.000000000E+00  0.00000E+00  9.000E+00
      21    -1     0     0   511   502  0.000000000E+00  0.000000000E+00 -3.974855834E+01  3.974855834E+01  0.000000000E+00  0.00000E+00  9.000E+00
      25     1     1     2     0     0 -4.622667362E+01  7.380768796E+01  3.981359248E+02  4.262913369E+02  1.250104362E+02  0.00000E+00  9.000E+00
      23     2     1     2     0     0  1.976812072E+01 -6.036673912E+01  2.757818219E+02  2.974988538E+02  9.173348887E+01  0.00000E+00  9.000E+00
      -1     1     4     4     0   503 -2.389365364E+01 -6.319708047E+01  1.573164261E+02  1.712114029E+02  3.300000000E-01  0.00000E+00  9.000E+00
       1     1     4     4   503     0  4.366177435E+01  2.830341345E+00  1.184653958E+02  1.262874510E+02  3.300000000E-01  0.00000E+00  9.000E+00
      21     1     1     2   501   502  7.308760316E+00  5.628636458E+00  1.463508975E+03  1.463538048E+03  2.157918644E-05  0.00000E+00  9.000E+00
       1     1     1     2   511     0  1.914979259E+01 -1.906958529E+01 -2.456901529E+00  2.713869755E+01  3.300000000E-01  0.00000E+00  9.000E+00

       
       
    <event>
      8  10001  8.38428E-01  2.49056E+01 -1.00000E+00  1.56239E-01
      -2    -1     0     0     0   502  0.000000000E+00  0.000000000E+00  7.753360466E+01  7.753360466E+01  0.000000000E+00  0.00000E+00  9.000E+00
       2    -1     0     0   501     0  0.000000000E+00  0.000000000E+00 -5.670334538E+02  5.670334538E+02  0.000000000E+00  0.00000E+00  9.000E+00
      25     1     1     2     0     0  1.326433145E+02  4.878316651E+01 -2.185945571E+02  2.887611222E+02  1.250014364E+02  0.00000E+00  9.000E+00
      23     2     1     2     0     0 -1.528874832E+02 -4.003353001E+01 -1.763429849E+02  2.557777852E+02  9.668588857E+01  0.00000E+00  9.000E+00
     -16     1     4     4     0     0 -1.481672552E+02 -5.728023231E+01 -1.272713936E+02  2.035499156E+02  3.303624740E-06  0.00000E+00  9.000E+00
      16     1     4     4     0     0 -4.720228038E+00  1.724670229E+01 -4.907159129E+01  5.222786961E+01  6.743495762E-07  0.00000E+00  9.000E+00
      21     1     1     2   501   511  1.448316693E+01 -1.317220199E+01 -3.566644103E+01  4.068616528E+01  2.939421655E-06  0.00000E+00  9.000E+00
      21     1     1     2   511   502  5.761001796E+00  4.422565493E+00 -5.889586608E+01  5.934198571E+01  3.234066955E-06  0.00000E+00  9.000E+00

      
      
    cmsRun ParticleTreeDrawer_cfg.py   inputFiles=file:RunIIFall18wmLHEGS-00000.root
    
    
    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/Generation/CMSSW_10_2_3/src/LatinoTreesGEN/GenDumper/test/
    
    cmsRun gendumper_cfg.py   inputFiles=file:../../../RunIIFall18wmLHEGS-00000.root \
                              outputFile=/tmp/amassiro/test.root      \
                              isMiniAod=False  \
                              mcLHERunInfoTag=""  \
                              mcLHEEventInfoTag="externalLHEProducer" \
                              maxEvents=-1
                              
                              
    
    
    r99t /tmp/amassiro/test.root    DrawVariable.cxx\(\"lhept\",10,0,30,\"1\"\)

    r99t /tmp/amassiro/test.root    DrawVariable.cxx\(\"mbbLHE\",100,0,200,\"1\"\)

    r99t /tmp/amassiro/test.root    DrawVariable.cxx\(\"mglugluLHE\",100,0,200,\"1\"\)

    
      
GEN -> AOD 
    
    
    
    
    
    
    