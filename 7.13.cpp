/*
 * Created by NewUser on 2022/1/3.
 * 判断是否是字串
 */
#include <iostream>

using namespace std;

int match(const char *p1, const char *p2) {
    int j, k;
    for (int i = 0; p1[i] != '\0'; ++i) {
        for (j = 0, k = i; p2[j] != '\0' && p1[k] == p2[j]; ++j, ++k) {

        }
        if (p2[j] == '\0') {
            return i;
        }
    }
    return -1;
}

int main() {
    int i;
    char p1[80] = "12345";
    char p2[80] = "345";
    i = match(p1, p2);
    if (i != -1) {
        cout << "success: " << i;
    } else {
        cout << "Fail";
    }
    return 0;
}