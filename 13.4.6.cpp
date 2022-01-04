/*
 * Created by NewUser on 2022/1/4.
 * 纯虚函数的几何图形抽象类
 */
#include <iostream>

class Shape {
public:
    virtual float Area() = 0;

    virtual void SetData(float, float = 0) = 0;
};

class Triangle : public Shape {
    float w, h;
public:
    Triangle(float w = 0, float h = 0) {
        this->w = w;
        this->h = h;
    }

    float Area() {
        return w * h / 2;
    }

    void SetData(float d, float d1) {
        w = d;
        h = d1;
    }
};

class Rectangle : public Shape {
    float w, h;

public:
    Rectangle(float w = 0, float h = 0) {
        this->w = w;
        this->h = h;
    }

    float Area() {
        return w * h;
    }

    void SetData(float d, float d1) {
        w = d;
        h = d1;
    }
};

class Square : public Shape {
    float s;
public:
    Square(float s = 0) {
        this->s = s;
    }

    float Area() override {
        return s * s;
    }

    void SetData(float d, float d1) override {
        s = d;
    }
};

class Circle:public Shape{
    float r;
public:
    Circle(float r = 0){
        this->r = r;
    }

    float Area() override {
        return (float)3.14*r*r;
    }

    void SetData(float d, float d1) override {
        r = d;
    }
};

float CalcArea(Shape &shape){
    return shape.Area();
}

using namespace std;

int main() {
    Circle circle(1);
    Rectangle rectangle(2,2);
    cout << CalcArea(rectangle);
    return 0;
}