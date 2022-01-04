/*
 * Created by NewUser on 2022/1/3.
 * 分数类
 */
#include <iostream>

using namespace std;

class Fraction {
    int m, n;
    int temp;
public:
    Fraction(int m = 0, int n = 1) {
        temp = gcd(m, n);
        this->m = m / temp;
        this->n = n / temp;
        if (m * n > 0) {
            this->m = abs(this->m);
            this->n = abs(this->n);
        } else {
            this->m = -abs(this->m);
            this->n = abs(this->n);
        }
    }

    int gcd(int x1, int x2);

    Fraction &operator=(Fraction f) {
        this->m = f.m;
        this->n = f.n;
        return *this;
    }

    Fraction operator+(Fraction f) {
        return Fraction(this->m * f.n + f.m * this->n, this->n * f.n / temp);
    }

    Fraction operator-(Fraction f) {
        return Fraction(this->m * f.n - f.m * this->n, this->n * f.n / temp);
    }

    friend Fraction operator*(Fraction f1, Fraction f2);

    friend Fraction operator/(Fraction f1, Fraction f2);

    void show() {
        cout << m << "/" << n << '\n';
    }
};

Fraction operator*(Fraction f1, Fraction f2) {
    return Fraction(f1.m * f2.m, f1.n * f2.n);
}

Fraction operator/(Fraction f1, Fraction f2) {
    return Fraction(f1.m * f2.n, f1.n * f2.m);
}

int Fraction::gcd(int x1, int x2) {
    int r;
    while ((r = x1 % x2)) {
        x1 = x2;
        x2 = r;
    }
    return x2;
}

int main() {
    Fraction f1(1, 2);
    Fraction f2(1, 3);
    Fraction f3;

    f3 = f1 + f2;
    f3.show();

    f3 = f1 - f2;
    f3.show();

    f3 = f1 * f2;
    f3.show();

    f3 = f1 / f2;
    f3.show();
    return 0;
}