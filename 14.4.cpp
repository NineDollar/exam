/*
 * Created by NewUser on 2022/1/4.
 * 二进制读取
 */
#include <iostream>
#include "fstream"

using namespace std;

int main() {
    int du;
    double sinn, coss;
    fstream f;
    f.open("sincos.bin", ios::in | ios::binary);
    if (!f) {
        cout << "File open failed.";
        exit(1);
    }
    f.seekp(20 * (sizeof(int) + 2 * sizeof(double)));
    for (int i = 0; i <= 10; ++i) {
        f.read((char *) &du, sizeof(int));
        f.read((char *) &sinn, sizeof(double ));
        f.read((char *) &coss, sizeof(double ));
        cout << du << ',' << sinn << ',' << coss << '\n';
    }
    f.close();
    return 0;
}