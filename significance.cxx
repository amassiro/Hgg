

void significance(){

    TCanvas* cc = new TCanvas("cc", "", 800, 600);

    // TF1 *f1 = new TF1("f1", "0.007*sqrt(x)", 0, 100);
    // TF1 *f1 = new TF1("f1", "0.02*sqrt(x)", 0, 100);
    // TF1 *f1 = new TF1("f1", "0.03*sqrt(x)", 0, 100);
    TF1 *f1 = new TF1("f1", "0.038*sqrt(x)", 0, 50);

    f1->SetLineColor(kBlue);
    f1->SetLineWidth(2);
    f1->SetTitle("Significance extrapolation");

    // Draw the function
    f1->Draw("");

    f1->GetXaxis()->SetTitle("scaling factor");
    f1->GetYaxis()->SetTitle("significance");


    TLine v1 (2.3, 0, 2.3, 0.35);
    v1.SetLineColor(kRed);
    v1.SetLineWidth(2);
    v1.DrawClone();

    // TLine v2 (23, 0, 23,  0.35);
    TLine v2 (12.65, 0, 12.65,  0.35);
    v2.SetLineColor(kRed);
    v2.SetLineWidth(2);
    v2.DrawClone();

    TLine v3 (38, 0, 38,  0.35);
    v3.SetLineColor(kRed);
    v3.SetLineWidth(2);
    v3.DrawClone();

    // 2.3
    // 10 -> wrong
    // 3

    // 2.3
    // 1.5 * 3 = 4.5 + 1 = 5.5
    // 3

    cc->SetGrid();

}
