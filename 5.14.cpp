/*
 * Created by NineDollar on 2022/1/3.
 * 十进制转二进制
 */
#include <iostream>

using namespace std;

void bin(int base) {
    if (base > 0) {
        bin(base / 2);
        cout << base % 2 << " ";
    }
}

int main() {
    bin(255);
    return 0;
}