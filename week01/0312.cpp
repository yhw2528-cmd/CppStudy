#include <iostream> 
#include <string>
using namespace std;

class Rectangle{
public:
	int width;
	int height;
	int getArea();
};

int Rectangle::getArea(){
	return width*height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}
//예제 3.6
/*
class Rectangle{
public:
	int width,height;
	Rectangle();
	Rectangle(int w,int h);
	Rectangle(int length);
	bool isSquare();
};

Rectangle::Rectangle(){
	width=height=1;
}

Rectangle::Rectangle(int w,int h){
	width=w;
	height=h;
}

Rectangle::Rectangle(int length){
	width=height=length;
}

bool Rectangle::isSquare(){
	if(height==width){
		return true;
	}
	else{return false;}
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);
	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}
*/
/*
//예제 3.7
class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();

};

Circle::Circle() {
	radius = 1;
	cout << "반지름이" << radius << "인 원 생성" << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "반지름이" << radius << "인 원 생성" << endl;
}
Circle::~Circle(){
	cout << "반지름이" << radius << "인 원 소멸" << endl;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);
	return 0;
}
*/