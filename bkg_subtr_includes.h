#include <iostream>
#include <TLegend.h>
#include <TFrame.h>
#include <sstream>
#include <string>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include "TH1F.h"
#include "TH2D.h"
#include <THStack.h>
#include "TProfile.h"
#include "TGraph.h"
#include "TFile.h"
#include "TTree.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TStyle.h"
#include "TFractionFitter.h"
#include <cctype>
#include <vector>
#include <math.h>
#include <TLatex.h>
#include <TLine.h>
#include <TMarker.h>
#include <TPave.h>
#include <TPaveStats.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <TString.h>
#include "TGraphErrors.h"
#include "TF1.h"
#include "TEfficiency.h"
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <iostream>
#include <valarray>
#include <RooPlot.h>
#include <RooArgSet.h>
#include <RooArgList.h>
#include <RooDataSet.h>
#include <RooDataHist.h>
#include <RooGaussian.h>
#include <RooPolynomial.h>
#include <RooBernstein.h>
#include <RooRealVar.h> 
#include <RooFormulaVar.h> 
#include <RooWorkspace.h> 
#include <RooMsgService.h> 
#include <RooAddPdf.h> 
#include <RooAddition.h> 
#include <RooMinuit.h> 
#include <RooFitResult.h> 
#include <TROOT.h> 
#include <TChain.h>

using namespace std;

float fit_jpsik(TChain*, TChain*, const string, const vector<float>);
void plot_bkg_sub_tau(TChain*, TChain*, const string, const vector<float>, const vector<float>, float);
void fit_MC_mass_lifetime(TChain*, const string);
