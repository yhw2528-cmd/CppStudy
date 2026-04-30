#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "--Shape--";
    }
};

class Circle : public Shape {
    int radius;
public:
    Circle(int r = 1) : radius(r) {}  // 생성자, 기본값 1
    virtual void draw() {
        Shape::draw();
        cout << "Circle(radius: " << radius << ")" << endl;
    }
};

class Rect : public Shape {
    int width, height;
public:
    Rect(int w = 1, int h = 1) : width(w), height(h) {}  // 생성자, 기본값 1
    virtual void draw() {
        Shape::draw();
        cout << "Rect(width: " << width << ", height: " << height << ")" << endl;
    }
};

int main() {
    Circle circle;
    Rect rect;
    Shape* pShape;

    int radius, width, height;

    // Circle 입력
    while(true) {
        cout << "radius 양수 입력: ";
        cin >> radius;
        if(radius > 0) break;
        cout << "양수를 다시 입력하시오\n";
    }

    // Rect 입력
    while(true) {
        cout << "width, height 양수 입력: ";
        cin >> width >> height;
        if(width > 0 && height > 0) break;
        cout << "양수를 다시 입력하시오\n";
    }

    // Circle draw
    circle = Circle(radius);
    pShape = &circle;
    pShape->draw();

    // Rect draw
    rect = Rect(width, height);
    pShape = &rect;
    pShape->draw();
}