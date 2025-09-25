# Hgg

Higgs to gluon gluon


Kate

    Hgg (since Run1)


    
Tutorials:

    https://indico.cern.ch/event/1414035/sessions/547182/#20240524
    
Where:

    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/Hgg/Hgg/

    
Step by Step installation

    
    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/Hgg/Analysis/
    
    git clone https://github.com/latinos/mkShapesRDF -b Run3
    cd mkShapesRDF/
    source install.sh

    
Install PlotsConfigurationRun3
    
    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/Hgg/Analysis/
    git clone git@github.com:latinos/PlotsConfigurationsRun3.git 



Step by Step use

    
    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/Hgg/Analysis/mkShapesRDF/
    source start.sh

    cd ../PlotsConfigurationsRun3/Hgg/
    
    

    
Post-processing private sample

    /ZH_HToGluGlu_ZToLL_13TeV_powheg_pythia8/rgerosa-RunIISummer20UL18NanoAODv9_106X_upgrade2018_realistic_v11_L1v1-MINIAODSIM-00000000000000000000000000000000/USER
    some files here: /eos/user/a/amassiro/HIG/ZHgg


    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/Hgg/Analysis/mkShapesRDF/
    source start.sh

    
    store: /eos/user/a/amassiro/HIG/ZHggPostProc/
    
    
    alias vomsgrid='voms-proxy-init --rfc --voms cms -valid 193:00'

    vomsgrid
    
    mkPostProc -o 0 -p Summer22_130x_nAODv12_Full2022v12 -s MCl1loose2022v12__MCCorr2022v12 -T ggWW_LL -dR 1
    
    mkPostProc -o 0 -p Summer20UL18_106x_nAODv9_Full2018v9 -s MCFull2018v9 -T ZHgg -dR 1
    
    jobs in: /afs/cern.ch/work/a/amassiro/Latinos/Framework/Hgg/Analysis/mkShapesRDF/mkShapesRDF/processor/condor
    
    interactive mode:
    python /afs/cern.ch/work/a/amassiro/Latinos/Framework/Hgg/Analysis/mkShapesRDF/mkShapesRDF/processor/condor/Summer20UL18_106x_nAODv9_Full2018v9/MCFull2018v9/ZHgg__part0/script.py
    
    
    mkPostProc -o 0 -p Summer20UL18_106x_nAODv9_Full2018v9 -s MCFull2018v9 -T ZHgg
    
    
    
    output is here: /eos/user/a/amassiro/HIG/ZHggPostProc/Summer20UL18_106x_nAODv9_Full2018v9/MCFull2018v9/
    
    
    
    
Test 1

    ZH>gg
    
Where analysis:

    /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/Hgg/

Where generation:

    first I need to generate the sample up to NanoAOD
    
    Using LO Pythia?
    
    Using LO/NLO MG?
    
    