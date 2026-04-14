
#include <iostream>
#include <string>
using namespace std;

/*
// 2차원평면에서한점을표현하는클래스Point 선언
class Point { 
    int x, y; //한점(x,y) 좌표값
public:
    void set(int x, int y) { this->x = x; this->y = y; }
    void showPoint() {
    cout<< "( x:" << x << "," << "y:"<< y << ")" << endl;
}
};

class ColorPoint : public Point { // 2차원평면에서컬러 점을표현하는클래스ColorPoint. Point를상속받음
    string color;// 점의색표현
    public:
    void setColor(string color)  {this->color = color; }
    void showColorPoint();
};
void ColorPoint::showColorPoint() {
    cout<< color << ":";
    showPoint(); // Point의showPoint() 호출
}
int main() {
    Point p; // 기본클래스의객체생성
    ColorPoint cp; // 파생클래스의객체생성
    int x,y;
    cout<<"x y 값 입력";
    cin>>x>>y;
    cp.set(x,y);
    cp.setColor("Red"); // 파생클래스의멤버호출
    cp.showPoint(); // 파생클래스의멤버호출
}*/


class Point { 
protected:
    int x, y; //한점(x,y) 좌표값
public:
    void set(int x, int y);
    void showPoint();
};
void Point::set(int x, int y) {
    this->x = x;
    this->y = y;
}
void Point::showPoint() {
    cout<< "(" << x << "," << y << ")" << endl;
}
class ColorPoint : public Point {
    string color;
public:
    void setColor(string color);
    void showColorPoint();
    bool equals(ColorPoint p);
};
void ColorPoint::setColor(string color) {
    this->color = color;
}

void ColorPoint::showColorPoint() {
    cout<< color << ":";
    showPoint(); // Point 클래스의showPoint() 호출
}
bool ColorPoint::equals(ColorPoint p) {
    if(x == p.x&& y == p.y&& color == p.color) // ①
    return true;
    else 
    return false;
}
int main() {
    Point p; // 기본클래스의객체생성
    p.set(2,3); // ②
    p.showPoint();
    ColorPoint cp; // 파생클래스의객체생성
    cp.set(3,4);
    cp.setColor("Red");
    cp.showColorPoint();
    ColorPoint cp2;
    cp2.set(3,4);
    cp2.setColor("Red");
    cout<< ((cp.equals(cp2))?"true":"false");// ⑦
}