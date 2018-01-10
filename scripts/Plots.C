#include<Plotter.h>



void Plots()
{
  
//Harry::Plotter p("demo/VLFTree",{"AnaMuons.Pt()","AnaJets.Pt()","MT_LeadingMuon_MET","AnaMET.MT()"},100,0,70);  //Jets (hasta 500) AnaMET (hasta 260) MT (hasta 80)

  Harry::Plotter p("demo/VLFTree",{"AnaMuons.Pt()"},35,0,60);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/Signal.root","Signal",0.331);
  //DY
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/DYJetsToLL_HT/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/",
		 "DY",1.318077913);
  //Single Top
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/ST/ST_s-channel_4f_leptonDecays_13TeV-amcatnlo-pythia8_TuneCUETP8M1",
		 "ST",0.336);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/ST/ST_t-channel_antitop_4f_inclusiveDecays_TuneCUETP8M2T4_13TeV-powhegV2-madspin",
		 "ST",0.2658808098);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/ST/ST_t-channel_top_4f_inclusiveDecays_TuneCUETP8M2T4_13TeV-powhegV2-madspin",
		 "ST",0.2658808098);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/ST/ST_tW_antitop_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1",
		 "ST",0.2743065568);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/ST/ST_tW_top_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1",
		 "ST",0.2743065568);
  //TT
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/TTToLL_MLL/TT_TuneCUETP8M2T4_13TeV-powheg-pythia8",
		 "TT",1.07907048);
  //W+Jets
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-70To100_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",163.713);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-100To200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",16.12246515);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-200To400_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.5484566297);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-400To600_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.1491425684);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-600To800_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.1879002812);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-800To1200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.03561855317);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-1200To2500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.02339910957);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-2500ToInf_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.001475217613);
  p.SetCut("AnaMuons.Pt()<20");
  //p.SaveFile("Muons_Pt.root");
  p.SaveFile("Muons_PtCutLT20.root");
  p.Delete();
  
  Harry::Plotter d("demo/VLFTree",{"AnaJets.Pt()"},100,0,550);
  d.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/Signal.root","Signal",0.331);
   //DY
  d.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/DYJetsToLL_HT/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/","DY",1.318077913);
   //Single Top
  d.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/ST/ST_s-channel_4f_leptonDecays_13TeV-amcatnlo-pythia8_TuneCUETP8M1",
		 "ST",0.336);
  d.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/ST/ST_t-channel_antitop_4f_inclusiveDecays_TuneCUETP8M2T4_13TeV-powhegV2-madspin",
		 "ST",0.2658808098);
  d.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/ST/ST_t-channel_top_4f_inclusiveDecays_TuneCUETP8M2T4_13TeV-powhegV2-madspin",
		 "ST",0.2658808098);
  d.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/ST/ST_tW_antitop_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1",
		 "ST",0.2743065568);
  d.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/ST/ST_tW_top_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1",
		 "ST",0.2743065568);
   //TT
  d.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/TTToLL_MLL/TT_TuneCUETP8M2T4_13TeV-powheg-pythia8","TT",1.07907048);
   //W+Jets
  d.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-70To100_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",163.713);
  d.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-100To200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",16.12246515);
  d.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-200To400_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.5484566297);
  d.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-400To600_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.1491425684);
  d.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-600To800_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.1879002812);
  d.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-800To1200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.03561855317);
  d.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-1200To2500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.02339910957);
  d.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-2500ToInf_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.001475217613);
  //d.SavePdfs("Jets_Pt");
  d.SetCut("AnaMuons.Pt()<20");
  //d.SaveFile("Jets_Pt.root");
  d.SaveFile("Jets_PtCutLT20.root");
  d.Delete();
  
  Harry::Plotter p("demo/VLFTree",{"MT_LeadingMuon_MET"},45,0,90);  
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/Signal.root","Signal",0.331);
  //DY
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/DYJetsToLL_HT/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/","DY",1.318077913);
  //Single Top
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/ST/ST_s-channel_4f_leptonDecays_13TeV-amcatnlo-pythia8_TuneCUETP8M1",
		 "ST",0.336);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/ST/ST_t-channel_antitop_4f_inclusiveDecays_TuneCUETP8M2T4_13TeV-powhegV2-madspin",
		 "ST",0.2658808098);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/ST/ST_t-channel_top_4f_inclusiveDecays_TuneCUETP8M2T4_13TeV-powhegV2-madspin",
		 "ST",0.2658808098);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/ST/ST_tW_antitop_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1",
		 "ST",0.2743065568);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/ST/ST_tW_top_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1",
		 "ST",0.2743065568);
  //TT
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/TTToLL_MLL/TT_TuneCUETP8M2T4_13TeV-powheg-pythia8","TT",1.07907048);
  //W+Jets
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-70To100_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",163.713);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-100To200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",16.12246515);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-200To400_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.5484566297);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-400To600_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.1491425684);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-600To800_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.1879002812);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-800To1200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.03561855317);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-1200To2500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.02339910957);
  p.AddDirectory("/home/camilo/cms/VLF_Montecarlo_Ana/Data/WJets_HT/WJetsToLNu_HT-2500ToInf_TuneCUETP8M1_13TeV-madgraphMLM-pythia8",
		 "WPlusJets",0.001475217613);
  p.SetCut("AnaMuons.Pt()<20");
  //p.SaveFile("MT_LeadingMuon_MET.root");
  p.SaveFile("MT_LeadingMuon_METCutLT20.root");
  p.Delete();


  /***************************************************************************************************************************
   *                                     FIRST CUT
   ***************************************************************************************************************************/

  
}
