#include <iostream>
using namespace std;

class Power {
    int kick;
    int punch;
public:
    Power(int kick=0, int punch=0) {
        this->kick = kick; this->punch = punch;
    }
    void show();
    Power & operator +=(Power op2); // += 연산자함수선언
    Power & operator -=(Power op2); // -= 연산자함수선언
};

void Power::show() {
    cout<< "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power & Power::operator+=(Power op2) {
    this->kick += op2.kick; // kick더하기
    this->punch += op2.punch; // punch더하기
    return *this; // 더한결과리턴
}

Power & Power::operator-=(Power op2) {
    this->kick -= op2.kick; // kick빼기
    this->punch -= op2.punch; // punch빼기
    return *this; // 뺀결과리턴
}
int main() {
    int kick, punch;
    cout << "a객체의 킥과 펀치의 파워를 입력하세요: ";
    cin >> kick >> punch;
    Power a(kick, punch);
    cout << "b객체의 킥과 펀치의 파워를 입력하세요: ";
    cin >> kick >> punch;
    Power b(kick, punch);
    a += b; // a에 b더하기
    a.show();
    a -= b; // a에서 b빼기
    a.show();
}