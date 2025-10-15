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
    
    
    Need more steps ...
    MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9
    At least: MCCorr2018v9, now added in the step "MCFull2018v9"
     
    mkPostProc -o 0 -p Summer20UL18_106x_nAODv9_Full2018v9 -s MCFull2018v9 -T ZHgg
     
    
    output is here: /eos/user/a/amassiro/HIG/ZHggPostProc/Summer20UL18_106x_nAODv9_Full2018v9/MCFull2018v9/
    
    
    Expected: ~150 events of signal in 2018
    
     
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
    
    