/*
 * Created by NineDollar on 2022/1/3.
 * 完数
 */
#include <iostream>

using namespace std;

void wanshu(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; ++i) {
        if (n%i == 0){
            sum += i;
        }
    }
    if (sum == n){
        cout << "is factors: ";
        for (int i = 1; i <= n / 2; ++i) {
            cout << i << " ";
        }
    }
}

int main() {
    wanshu(6);
    return 0;
}