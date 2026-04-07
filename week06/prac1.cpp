#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstring>
using namespace std;

class Power {
    int kick;
    int punch;
public:
    Power(int kick=0, int punch=0) {
    this->kick = kick; this->punch = punch;
    }
    void show();
    Power operator+ (Power op2); // + 연산자함수선언
    Power operator- (Power op2); // - 연산자함수선언
    };
void Power::show() {
cout<< "kick=" << kick << ',' << "punch=" << punch << endl;
}
Power Power::operator+(Power op2) {
    Power tmp; // 임시객체생성
    tmp.kick= this->kick + op2.kick; // kick더하기
    tmp.punch= this->punch + op2.punch; // punch더하기
    return tmp; // 더한결과리턴
}

Power Power::operator-(Power op2) {
    Power tmp; // 임시객체생성
    tmp.kick= this->kick - op2.kick; // kick빼기
    tmp.punch= this->punch - op2.punch; // punch빼기
    return tmp; // 뺀결과리턴
}
int main() {
    int kick, punch;
    cout << "a객체의 킥과 펀치의 파워를 입력하세요: ";
    cin >> kick >> punch;
    Power a(kick, punch);
    cout << "b객체의 킥과 펀치의 파워를 입력하세요: ";
    cin >> kick >> punch;
    Power b(kick, punch), c, d;
    c = a + b; // 파워객체+연산
    d = a - b; // 파워객체-연산
    a.show();
    b.show();
    c.show();
    d.show();

}