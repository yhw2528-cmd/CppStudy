#include <iostream> 
#include <cstring>
#include <string>
using namespace std;
///1번 문제
/*
int main() {
	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	while (true) {
		cout << "암호>>";
		cin >> password;
		if (strcmp(password, "C++") == 0) { //앞에거랑 뒤에거를 확인하는 것
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}
		else
			cout << "암호가 틀립니다~~" << endl;
	}
}*/

//2번
/*
int main() {
	string song("Falling in love with you");
	string elvis("Elvis Presley"); 
	string singer;
	cout << song + "를 부른 가수는"; 
	cout << "(힌트 : 첫글자는 " << elvis[0] << ")?"; 
	getline(cin, singer); // 문자열 입력
	if (singer == elvis) // 문자열 비교
		cout << "맞았습니다.";
	else
		cout << "틀렸습니다. " + elvis + "입니다." << endl;
}
*/
///3번
/*
class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radius=1;
	cout<<"반지름 " << radius << " 원 생성" << endl;
		
}
Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30); 
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}

*/
///4번
/*
class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle(): Circle(1) {}


Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
	return radius * 3.14 * 3.14;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}
*/
//5번
/*
class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};
Point::Point() : Point(0, 0) {} // 위임 생성자
Point::Point(int a, int b) // 타겟 생성자
	: x(a), y(b) {
}
int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}
*/