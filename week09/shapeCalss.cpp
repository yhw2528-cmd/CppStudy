#include <iostream>
using namespace std;
/*
class Calculator {
    void input() {
        cout << "정수 2개를 입력하세요>> ";
        cin >> a >> b;
    }
protected:
    int a, b;
public:
    virtual int add(int a, int b) = 0;
    virtual int subtract(int a, int b) = 0;
    virtual int mul(int a, int b) = 0;          // 추가
    virtual double div(int a, int b) = 0;       // 추가
    virtual double average(int a[], int size) = 0;

    void run() {
        input();  // a, b 입력받음
        cout << "add: "      << add(a, b)      << endl;
        cout << "subtract: " << subtract(a, b) << endl;
        cout << "mul: "      << mul(a, b)      << endl;
        cout << "div: "      << div(a, b)      << endl;
    }
};

class GoodCalc : public Calculator {
public:
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
    int mul(int a, int b) { return a * b; }
    double div(int a, int b) {
        if(b == 0) {
            cout << "0으로 나눌 수 없습니다" << endl;
            return 0;
        }
        return (double)a / b;
    }
    double average(int a[], int size) {
        double sum = 0;
        for(int i = 0; i < size; i++)
            sum += a[i];
        return sum / size;
    }
};

int main() {
    // 4개 정수 입력받아 average 계산
    int a[4];
    cout << "정수 4개 입력: ";
    for(int i = 0; i < 4; i++) cin >> a[i];

    Calculator *p = new GoodCalc();  // Calculator* 로 선언
    cout << "average: " << p->average(a, 4) << endl;

    // run()으로 a, b 입력받아 계산
    p->run();

    delete p;
}*/

#include <iostream>
using namespace std;

class Calculator {
    void input() {
        cout << "정수 2 개를 입력하세요>> ";
        cin >> a >> b;
    }
protected:
    int a, b;
    virtual int calc(int a, int b) = 0;
public:
    void run() {
        input();
        cout << "계산된 값은 " << calc(a, b) << endl;
    }
};

// Adder
class Adder : public Calculator {
protected:
    int calc(int a, int b) { return a + b; }
};

// Subtractor
class Subtractor : public Calculator {
protected:
    int calc(int a, int b) { return a - b; }
};

// Multiplier
class Multiplier : public Calculator {
protected:
    int calc(int a, int b) { return a * b; }
};

// Divisor
class Divisor : public Calculator {
protected:
    int calc(int a, int b) { return a / b; }
};

int main(){
    Calculator *cp;
    
    Adder adder;
    Subtractor subtractor;
    Multiplier multiplier;
    Divisor divisor;
    
    cp = &adder;       cp->run();
    cp = &subtractor;  cp->run();
    cp = &multiplier;  cp->run();
    cp = &divisor;     cp->run();
}