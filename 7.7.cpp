/*
 * Created by NewUser on 2022/1/3.
 * 整数的相反数
 */
#include <iostream>

using namespace std;

/*!
 *
 * @param num
 * @param array
 */
int decom(int num, int *array) {
    int i = 0;
    while (num) {
        *array++ = num % 10;
        num /= 10;
        i++;
    }
    return i;
}

/*!
 * 数组数字转为整数
 * @param array
 * @param k
 * @return
 */
int combin(int *array, int k) {
    int num = 0;
    for (int i = 0; i < k; ++i) {
        num = num * 10 + *array++;
    }
    return num;
}

int main() {
    int array[10];
    int i, num;
    i = decom(1234, array);
    num = combin(array, i);
    cout << num;
    return 0;
}