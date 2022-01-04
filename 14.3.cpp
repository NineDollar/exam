/*
 * Created by NewUser on 2022/1/4.
 * 
 */
#include <iostream>
#include <fstream>
#include <valarray>

using namespace std;

int main() {
    double hdu, sinn, coss;
    fstream f;
    f.open("sincos.bin", ios::out | ios::binary);
    if (!f) {
        cout << "File open failed.";
        exit(1);
    }

    for (int du = 0; du <= 90; ++du) {
        hdu = du * 3.14 / 180;
        sinn = sin(hdu);
        coss = cos(hdu);
        f.write((char *) &du, sizeof(int));
        f.write((char *) &sinn, sizeof(double));
        f.write((char *) &coss, sizeof(double));
    }
    f.close();
    return 0;
}