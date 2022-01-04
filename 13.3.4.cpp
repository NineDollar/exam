/*
 * Created by NewUser on 2022/1/4.
 * 
 */
#include <iostream>

using namespace std;

class Num {
    int n;
public:
    Num(int i = 0) {
        n = i;
    }

    void show() {
        cout << "n=" << n << endl;
    }

    operator char *();  //转换类型
};

Num::operator char *() {
    int i = 0, t = n;
    while (t > 0) {
        i++;
        t = t / 10;
    }
    char *s = new char[i + 1];
    s[i] = '\0';
    t = n;
    for (i--; i >= 0; i--) {
        s[i] = '0' + t % 10;
        t = t / 10;
    }
    return s;
}

int main() {
    Num num = 2468;
    char *str;
    str = num;
    num.show();
    cout << "str=" << str << endl;
    delete[]str;
    return 0;
}