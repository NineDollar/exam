/*
 * Created by NewUser on 2022/1/3.
 * 鞍点
 */
#include <iostream>

using namespace std;

bool find(int (*p)[5], int &rowp, int &colp) {
    bool flag;
    int max;
    for (int i = 0; i < 4; ++i) {
        max = p[i][0];
        for (int j = 0; j < 5; ++j) {
            if (p[i][j] > max) {
                max = p[i][j];
                rowp = i;
                colp = j;
            }
        }
        flag = true;
        for (int j = 0; j < 4; ++j) {
            if (p[j][colp] < max) {
                flag = false;
                break;
            }
        }
        if (flag) {
            return true;
        }
    }
    return false;
}

int main() {
    int a[4][5] = {{2, 8, 3, 4, 7},
                   {5, 6, 5, 5, 1},
                   {5, 7, 6, 7, 3},
                   {1, 9, 2, 7, 5}};
    int rowp, colp;
    if (find(a, rowp, colp)) {
        cout<<"a["<<rowp<<"]["<<colp<<"]";
    } else{
        cout << "Can't found";
    }
    return 0;
}