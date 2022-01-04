/*
 * Created by NewUser on 2022/1/3.
 * 循环移动数组
 */
#include <iostream>

using namespace std;

void outPut(int *p,int n){
    for (int i = 0; i < n; ++i) {
        cout<< *p++ <<" ";
    }
}

/*!
 * 循环移动数组（k>0,向右，k<0向左）
 * @param array
 * @param n 元素个数
 * @param k 移动次数
 */
void right_move(int *array, int n, int k) {
    int *p, *q;
    int *tempArray;
    if (k < 0) {
        k = n + k;
    }
    tempArray = new int[k];
    p = array + n - k;
    for (int i = 0; i < k; ++i) {
        *tempArray++ = *p++;
    }
    p = array+n-1;
    q = array+n-k-1;
    for (int i = 0; i < n - k; ++i) {
        *p-- = *q--;
    }
    tempArray--;
    for (int i = 0; i < k; ++i) {
        *p-- = *tempArray--;
    }
    tempArray++;
    delete[]tempArray;
}

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    right_move(array, 10, -3);
    outPut(array,10);
    return 0;
}