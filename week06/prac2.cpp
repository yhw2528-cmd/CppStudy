#include <iostream>
using namespace std;

class Power{
    int kick;
    int punch;

public:
    Power(int kick=0, int punch=0) {
        this->kick = kick; this->punch = punch;
    }
    void show();
    bool operator== (Power op2); // == 연산자함수선언
};

void Power::show() {
    cout<< "kick=" << kick << ',' << "punch=" << punch << endl;
}

bool Power::operator==(Power op2) {
    if (this->kick == op2.kick && this->punch == op2.punch) // kick과 punch가 모두 같으면
        return true; // true리턴
    else
        return false; // 다르면 false리턴
}

int main(){
    int kick, punch;
    cout << "a객체의 킥과 펀치의 파워를 입력하세요: ";
    cin >> kick >> punch;
    Power a(kick, punch);
    cout << "b객체의 킥과 펀치의 파워를 입력하세요: ";
    cin >> kick >> punch;
    Power b(kick, punch);
    a.show();
    b.show();
    if (a == b) // a와 b가 같은지 비교
        cout << "a와 b는 같습니다." << endl;
    else
        cout << "a와 b는 다릅니다." << endl;
}