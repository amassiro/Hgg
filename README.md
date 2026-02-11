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
    
    

    
Post-processing private sample 2018

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
    
    
    Need more steps ...
    MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9
    At least: MCCorr2018v9, now added in the step "MCFull2018v9"
     
    mkPostProc -o 0 -p Summer20UL18_106x_nAODv9_Full2018v9 -s MCFull2018v9 -T ZHgg
     
    
    output is here: /eos/user/a/amassiro/HIG/ZHggPostProc/Summer20UL18_106x_nAODv9_Full2018v9/MCFull2018v9/
    
    
    Expected: ~150 events of signal in 2018
    
    
    Units in pb
    From https://twiki.cern.ch/twiki/pub/LHCPhysics/HiggsXSBR/Higgs_XSBR_YR4_update.xlsx
    8.839E-01 pb
    and the branching ratio: 
    https://twiki.cern.ch/twiki/bin/view/LHCPhysics/CERNYellowReportPageBR
    8.187E-02
    BR Z>ll:  3.3658% x 3
    From https://pdg.lbl.gov/2018/listings/rpp2018-list-z-boson.pdf

    ZH_HToGluGlu_ZToLL_13TeV_powheg_pythia8

    59000×0.8839×0.08187×0.033658×3


Post-processing private sample 2017

    /qqZH_HToGluGlu_ZToLL/amassiro-RunIISummer20UL17NanoAODv9_106X_mc2017_realistic_v6-MINIAODSIM-00000000000000000000000000000000/USER
    /ggZH_HToGluGlu_ZToLL/amassiro-RunIISummer20UL17NanoAODv9_106X_mc2017_realistic_v6-MINIAODSIM-00000000000000000000000000000000/USER


    /ZH_HToGluGlu_ZToLL/amassiro-RunIISummer20UL17NanoAODv9_106X_mc2017_realistic_v6-MINIAODSIM-00000000000000000000000000000000/USER
    --> actually H to all

    maybe also official production?
    Dataset: /ZH_HToGluGlu_ZToLL_M-125_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL16NanoAODAPVv9-106X_mcRun2_asymptotic_preVFP_v11-v2/NANOAODSIM


    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/Hgg/Analysis/mkShapesRDF/
    source start.sh


    store: /eos/user/a/amassiro/HIG/ZHggPostProc/


    alias vomsgrid='voms-proxy-init --rfc --voms cms -valid 193:00'

    vomsgrid

    mkPostProc -o 0 -p Summer20UL17_106x_nAODv9_Full2017v9 -s MCFull2017v9 -T ZHgg -dR 1

    jobs in: /afs/cern.ch/work/a/amassiro/Latinos/Framework/Hgg/Analysis/mkShapesRDF/mkShapesRDF/processor/condor

    interactive mode:
    python /afs/cern.ch/work/a/amassiro/Latinos/Framework/Hgg/Analysis/mkShapesRDF/mkShapesRDF/processor/condor/Summer20UL17_106x_nAODv9_Full2017v9/MCFull2017v9/ZHgg__part0/script.py


    mkPostProc -o 0 -p Summer20UL17_106x_nAODv9_Full2017v9 -s MCFull2017v9 -T ZHgg



    output is here: /eos/user/a/amassiro/HIG/ZHggPostProc/Summer20UL17_106x_nAODv9_Full2017v9/MCFull2017v9/



Ideas:

    - try Dr_jj to select Jets
    - find a way to estimate DY from data (zeta method from run1? ptll too low for photon trigger), functional form?
    - check higgs decay: Pythia and effective coupling to gluons?
    - extend to full run 2 and start looking at run 3 -> many areas to contribute to
    - contact with boosted Hgg analysers
    - show in higgs rare group L3




     
Optimization:



    cuts['Sig'] = {
        'expr' : 'Alt(Lepton_pt,2,0) < 15 && (abs(Lepton_pdgId[0])==abs(Lepton_pdgId[1])) && Alt(CleanJet_pt,2,0) < 30 && Alt(CleanJet_pt,1,0) > 30',
        'categories' : {
            'mllZ'               : 'mll>80 && mll< 100',
            'mllZpt1'            : 'mll>80 && mll< 100 && Lepton_pt[0]>40',
            'mllZpt1qgl'         : 'mll>80 && mll< 100 && Lepton_pt[0]>40 && Alt(Jet_qgl,CleanJet_jetIdx[0],2)<0.5 && Alt(Jet_qgl,CleanJet_jetIdx[1],2)<0.5',
            'mllZpt1qglmet'      : 'mll>80 && mll< 100 && Lepton_pt[0]>40 && Alt(Jet_qgl,CleanJet_jetIdx[0],2)<0.5 && Alt(Jet_qgl,CleanJet_jetIdx[1],2)<0.5 && PuppiMET_pt<60',
            'mllZpt1qglmetbVeto' : 'mll>80 && mll< 100 && Lepton_pt[0]>40 && Alt(Jet_qgl,CleanJet_jetIdx[0],2)<0.5 && Alt(Jet_qgl,CleanJet_jetIdx[1],2)<0.5 && PuppiMET_pt<60 && bVeto',
            'opt1'               : 'mll>80 && mll< 100 && Lepton_pt[0]>40 && Alt(Jet_qgl,CleanJet_jetIdx[0],2)<0.5 && Alt(Jet_qgl,CleanJet_jetIdx[1],2)<0.5 && PuppiMET_pt<60 && bVeto && detajj<3',
            'opt2'               : 'mll>80 && mll< 100 && Lepton_pt[0]>40 && Alt(Jet_qgl,CleanJet_jetIdx[0],2)<0.5 && Alt(Jet_qgl,CleanJet_jetIdx[1],2)<0.5 && PuppiMET_pt<60 && bVeto && detajj<3 && mjj<160 && mjj>60 && dphilljetjet>1',
            'opt3'               : 'mll>80 && mll< 100 && Lepton_pt[0]>40 && Alt(Jet_qgl,CleanJet_jetIdx[0],2)<0.5 && Alt(Jet_qgl,CleanJet_jetIdx[1],2)<0.5 && PuppiMET_pt<60 && bVeto && detajj<3 && mjj<160 && mjj>60 && dphilljetjet>1 && Alt(Jet_btagDeepB,CleanJet_jetIdx[0],2)<0.2 && Alt(Jet_btagDeepB,CleanJet_jetIdx[1],2) < 0.2 && Alt(Jet_btagCSVV2,CleanJet_jetIdx[0],2)<0.7 && Alt(Jet_btagCSVV2,CleanJet_jetIdx[1],2)<0.7',
      }
    }
    


Test 1

    ZH>gg
    
Where analysis:

    /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/Hgg/

Where generation:

    first I need to generate the sample up to NanoAOD
    
    Using LO Pythia?
    
    Using LO/NLO MG?
    
    
Plot significance

    r99t significance.cxx



2018 sample by IHEP:

    xrdfs cceos.ihep.ac.cn:1094 ls /store/user/zkou/CustomizedNanoAOD/V0/2018/MC/
    including WH production

    /store/user/zkou/CustomizedNanoAOD/V0/2018/MC/WminusH_HToGG_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8
    /store/user/zkou/CustomizedNanoAOD/V0/2018/MC/WplusH_HToGG_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8
    /store/user/zkou/CustomizedNanoAOD/V0/2018/MC/ZH_HToGG_ZToLL_M-125_TuneCP5_13TeV-powheg-pythia8
    /store/user/zkou/CustomizedNanoAOD/V0/2018/MC/ZH_HToGG_ZToNuNu_M-125_TuneCP5_13TeV-powheg-pythia8
    /store/user/zkou/CustomizedNanoAOD/V0/2018/MC/ggZH_HToGG_ZToLL_M-125_TuneCP5_13TeV-powheg-pythia8
    /store/user/zkou/CustomizedNanoAOD/V0/2018/MC/ggZH_HToGG_ZToNuNu_M-125_TuneCP5_13TeV-powheg-pythia8

    /store/user/zkou/CustomizedNanoAOD/V0/2018/MC/WminusH_HToGG_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/HIG-RunIISummer20UL18MiniAODv2-WHGG0
    /store/user/zkou/CustomizedNanoAOD/V0/2018/MC/WplusH_HToGG_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/HIG-RunIISummer20UL18MiniAODv2-WHGG0
    /store/user/zkou/CustomizedNanoAOD/V0/2018/MC/ZH_HToGG_ZToLL_M-125_TuneCP5_13TeV-powheg-pythia8/HIG-RunIISummer20UL18MiniAODv2-WHGG0
    /store/user/zkou/CustomizedNanoAOD/V0/2018/MC/ZH_HToGG_ZToNuNu_M-125_TuneCP5_13TeV-powheg-pythia8/HIG-RunIISummer20UL18MiniAODv2-WHGG0
    /store/user/zkou/CustomizedNanoAOD/V0/2018/MC/ggZH_HToGG_ZToLL_M-125_TuneCP5_13TeV-powheg-pythia8/HIG-RunIISummer20UL18MiniAODv2-WHGG0
    /store/user/zkou/CustomizedNanoAOD/V0/2018/MC/ggZH_HToGG_ZToNuNu_M-125_TuneCP5_13TeV-powheg-pythia8/HIG-RunIISummer20UL18MiniAODv2-WHGG0


    /eos/user/a/amassiro/HIG/
    /eos/user/a/amassiro/HIG/Hgg

    mkdir /eos/user/a/amassiro/HIG/Hgg/

    mkdir /eos/user/a/amassiro/HIG/Hgg/WminusH_HToGG_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/
    mkdir /eos/user/a/amassiro/HIG/Hgg/WplusH_HToGG_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/
    mkdir /eos/user/a/amassiro/HIG/Hgg/ZH_HToGG_ZToLL_M-125_TuneCP5_13TeV-powheg-pythia8/
    mkdir /eos/user/a/amassiro/HIG/Hgg/ZH_HToGG_ZToNuNu_M-125_TuneCP5_13TeV-powheg-pythia8/
    mkdir /eos/user/a/amassiro/HIG/Hgg/ggZH_HToGG_ZToLL_M-125_TuneCP5_13TeV-powheg-pythia8/
    mkdir /eos/user/a/amassiro/HIG/Hgg/ggZH_HToGG_ZToNuNu_M-125_TuneCP5_13TeV-powheg-pythia8/



    xrdcp -r root://cceos.ihep.ac.cn:1094//store/user/zkou/CustomizedNanoAOD/V0/2018/MC/WminusH_HToGG_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/HIG-RunIISummer20UL18MiniAODv2-WHGG0/   /tmp/amassiro/


    xrdcp -r root://cceos.ihep.ac.cn:1094//store/user/zkou/CustomizedNanoAOD/V0/2018/MC/WminusH_HToGG_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/HIG-RunIISummer20UL18MiniAODv2-WHGG0/     /eos/user/a/amassiro/HIG/Hgg/WminusH_HToGG_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/
    xrdcp -r root://cceos.ihep.ac.cn:1094//store/user/zkou/CustomizedNanoAOD/V0/2018/MC/WplusH_HToGG_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/HIG-RunIISummer20UL18MiniAODv2-WHGG0/      /eos/user/a/amassiro/HIG/Hgg/WplusH_HToGG_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/
    xrdcp -r root://cceos.ihep.ac.cn:1094//store/user/zkou/CustomizedNanoAOD/V0/2018/MC/ZH_HToGG_ZToLL_M-125_TuneCP5_13TeV-powheg-pythia8/HIG-RunIISummer20UL18MiniAODv2-ZHGG0           /eos/user/a/amassiro/HIG/Hgg/ZH_HToGG_ZToLL_M-125_TuneCP5_13TeV-powheg-pythia8/
    xrdcp -r root://cceos.ihep.ac.cn:1094//store/user/zkou/CustomizedNanoAOD/V0/2018/MC/ggZH_HToGG_ZToLL_M-125_TuneCP5_13TeV-powheg-pythia8/HIG-RunIISummer20UL18MiniAODv2-ZHGG0         /eos/user/a/amassiro/HIG/Hgg/ggZH_HToGG_ZToLL_M-125_TuneCP5_13TeV-powheg-pythia8/

    xrdcp -r root://cceos.ihep.ac.cn:1094//store/user/zkou/CustomizedNanoAOD/V0/2018/MC/ZH_HToGG_ZToNuNu_M-125_TuneCP5_13TeV-powheg-pythia8/HIG-RunIISummer20UL18MiniAODv2-ZHGG0         /eos/user/a/amassiro/HIG/Hgg/ZH_HToGG_ZToNuNu_M-125_TuneCP5_13TeV-powheg-pythia8/
    xrdcp -r root://cceos.ihep.ac.cn:1094//store/user/zkou/CustomizedNanoAOD/V0/2018/MC/ggZH_HToGG_ZToNuNu_M-125_TuneCP5_13TeV-powheg-pythia8/HIG-RunIISummer20UL18MiniAODv2-ZHGG0       /eos/user/a/amassiro/HIG/Hgg/ggZH_HToGG_ZToNuNu_M-125_TuneCP5_13TeV-powheg-pythia8/


Post-processing private sample 2018

    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/Hgg/Analysis/mkShapesRDF/
    source start.sh

    vomsgrid

    mkPostProc -o 0 -p Summer20UL18_106x_nAODv9_Full2018v9 -s MCFull2018v9 -T WpluslvHgg    -dR 1   --inputFolder True  --isLatino False
    mkPostProc -o 0 -p Summer20UL18_106x_nAODv9_Full2018v9 -s MCFull2018v9 -T WminuslvHgg   -dR 1   --inputFolder True  --isLatino False
    mkPostProc -o 0 -p Summer20UL18_106x_nAODv9_Full2018v9 -s MCFull2018v9 -T ZHllHgg       -dR 1   --inputFolder True  --isLatino False
    mkPostProc -o 0 -p Summer20UL18_106x_nAODv9_Full2018v9 -s MCFull2018v9 -T ggZHllHgg     -dR 1   --inputFolder True  --isLatino False


    jobs in: /afs/cern.ch/work/a/amassiro/Latinos/Framework/Hgg/Analysis/mkShapesRDF/mkShapesRDF/processor/condor

    interactive mode:
    python /afs/cern.ch/work/a/amassiro/Latinos/Framework/Hgg/Analysis/mkShapesRDF/mkShapesRDF/processor/condor/Summer20UL18_106x_nAODv9_Full2018v9/MCFull2018v9/WpluslvHgg__part0/script.py


    mkPostProc -o 0 -p Summer20UL18_106x_nAODv9_Full2018v9 -s MCFull2018v9 -T WpluslvHgg       --inputFolder True  --isLatino False
    mkPostProc -o 0 -p Summer20UL18_106x_nAODv9_Full2018v9 -s MCFull2018v9 -T WminuslvHgg      --inputFolder True  --isLatino False
    mkPostProc -o 0 -p Summer20UL18_106x_nAODv9_Full2018v9 -s MCFull2018v9 -T ZHllHgg          --inputFolder True  --isLatino False
    mkPostProc -o 0 -p Summer20UL18_106x_nAODv9_Full2018v9 -s MCFull2018v9 -T ggZHllHgg        --inputFolder True  --isLatino False


    output is here: /eos/user/a/amassiro/HIG/ZHggPostProc/Summer20UL18_106x_nAODv9_Full2018v9/MCFull2018v9/


Analysis:

    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/Hgg/Analysis/PlotsConfigurationsRun3/Hgg/2018UL1l




Centrally produced samples:

    /WminusH_HToGluGlu_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL16NanoAODAPVv9-106X_mcRun2_asymptotic_preVFP_v11-v2/NANOAODSIM/
    /WminusH_HToGluGlu_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL16NanoAODv9-106X_mcRun2_asymptotic_v17-v2/NANOAODSIM
    /WminusH_HToGluGlu_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL17NanoAODv9-106X_mc2017_realistic_v9-v2/NANOAODSIM
    /WminusH_HToGluGlu_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL18NanoAODv9-106X_upgrade2018_realistic_v16_L1v1-v2/NANOAODSIM

    /WplusH_HToGluGlu_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL16NanoAODAPVv9-106X_mcRun2_asymptotic_preVFP_v11-v2/NANOAODSIM
    /WplusH_HToGluGlu_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL16NanoAODv9-106X_mcRun2_asymptotic_v17-v2/NANOAODSIM
    /WplusH_HToGluGlu_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL17NanoAODv9-106X_mc2017_realistic_v9-v2/NANOAODSIM
    /WplusH_HToGluGlu_WToLNu_M-125_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL18NanoAODv9-106X_upgrade2018_realistic_v16_L1v1-v2/NANOAODSIM

    /ZH_HToGluGlu_ZToLL_M-125_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL16NanoAODAPVv9-106X_mcRun2_asymptotic_preVFP_v11-v2/NANOAODSIM
    /ZH_HToGluGlu_ZToLL_M-125_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL16NanoAODv9-106X_mcRun2_asymptotic_v17-v2/NANOAODSIM
    /ZH_HToGluGlu_ZToLL_M-125_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL17NanoAODv9-106X_mc2017_realistic_v9-v2/NANOAODSIM
    /ZH_HToGluGlu_ZToLL_M-125_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL18NanoAODv9-106X_upgrade2018_realistic_v16_L1v1-v2/NANOAODSIM





