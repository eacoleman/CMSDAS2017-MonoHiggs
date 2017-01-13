// Usage:
// .L PlotStack4l.C+
// PlotStack4l()

//gROOT.ProcessLine(".L PlotStack4l.C+");
//
#include <vector>
#include <string>

std::vector<std::string> plotNames= {
//    "hPFMET_3",
//    "hPFMET_8",
    "hMZ1_5",
    "hMZ1_8",
    "hMZ2_5",
    "hMZ2_8",
    "hM4l_7",
    "hM4l_8"
//    "hM4l_T_8",
//    "DPHI_8"
};

std::vector<std::string> fileNames={
    "filelist_4mu_2015_Fall15_AN_FNAL.txt",
    "filelist_4e_2015_Fall15_AN_FNAL.txt",
    "filelist_2e2mu_2015_Fall15_AN_FNAL.txt"
};

std::vector<int> nRebins={ 1, 2, 8, 10, 20};

void AutomateStackPlots() {
    // Example:
    // PlotStack4l("hPFMET_3","filelist_4mu_2015_Fall15_AN_FNAL.txt",3);

    for(const auto &plotN : plotNames) {
    for(const auto &fileN : fileNames) {
    for(const auto &cutN  : nRebins) {
        PlotStack4l(plotN, fileN, cutN); 
        gROOT->CloseFiles();
    }}}
}
