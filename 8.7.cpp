/*
 * Created by NewUser on 2022/1/3.
 * 枚举判断第n天后星期几
 */
#include <iostream>

using namespace std;

int main() {

    enum week {
        sun, mon, tue, wed, thu, fri, sat
    };

    char weekday[7][10] = {{"sun"},
                           {"mon"},
                           {"tue"},
                           {"wed"},
                           {"thu"},
                           {"fri"},
                           {"sat"}};

    week day =  week(1);  //今天星期一

    cout << "100 day after: " << weekday[(100 + day) % 7];

    return 0;
}