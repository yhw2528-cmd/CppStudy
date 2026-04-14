#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Math {
public:
    static int abs(int a) { return a > 0 ? a : -a; }
    static int max(int a, int b) { return (a > b) ? a : b; }
    static int min(int a, int b) { return (a > b) ? b : a; }
    static int diff(int a, int b) {
        if (a > b) return a - b;
        else return b - a;
    }
};

int main() {
    int menu;

    while (true) {
        cout << "1. ABS, 2. MAX, 3. MIN, 4. DIFF, 5. QUIT 중 메뉴 선택 >> ";
        cin >> menu;
        cin.ignore(); // 

        if (menu == 5) break;

        string number;
        cout << "정수를 입력하시오 >> ";
        getline(cin, number);

        stringstream ss(number);

        int a, b;

        switch (menu) {
        case 1: // ABS
            ss >> a;
            cout << "결과값: " << Math::abs(a) << endl;
            break;

        case 2: // MAX
            ss >> a >> b;
            cout << "결과값: " << Math::max(a, b) << endl;
            break;

        case 3: // MIN
            ss >> a >> b;
            cout << "결과값: " << Math::min(a, b) << endl;
            break;

        case 4: // DIFF
            ss >> a >> b;
            cout << "결과값: " << Math::diff(a, b) << endl;
            break;

        default:
            cout << "잘못된 메뉴입니다." << endl;
        }
    }

    return 0;
}
/*
class Circle{
private:
    static int numOfCircles;
    int radius;
public:
    Circle(int r=1); 
    ~Circle() { numOfCircles--; } 
    double getArea()  { return 3.14*radius*radius;}
    static int getNumOfCircles() { return numOfCircles; }
};
Circle::Circle(int r){
    int radius=r;
    numOfCircles++;
}

int Circle::numOfCircles=10;

int main() {
Circle *p = new Circle[10]; // 10개의생성자실행
    cout<< "생존하고있는원의개수= " << Circle::getNumOfCircles() << endl;
    delete [] p; // 10개의소멸자실행
    cout<< "생존하고있는원의개수= " << Circle::getNumOfCircles()<< endl;
    Circle a; // 생성자실행
    cout<< "생존하고있는원의개수= " << Circle::getNumOfCircles()<< endl;
    Circle b; // 생성자실행
    cout<< "생존하고있는원의개수= " << Circle::getNumOfCircles()<< endl;
}*/