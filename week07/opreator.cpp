#include <iostream>
using namespace std;

//1번 문제
/*
class Power {
    int kick; 
    int punch; 
public:
    Power(int kick=0, int punch=0) {
    this->kick = kick; this->punch = punch;
}
void show();
    friend Power operator+(int op1, Power op2); // 프렌드선언
    friend Power operator+(Power op1, int op2); // 프렌드선언
};
void Power::show() {
    cout<< "kick=" << kick << ',' << "punch=" << punch << endl;
}
Power operator+(int op1, Power op2) {
    Power tmp; // 임시객체생성
    tmp.kick= op1 + op2.kick; // kick 더하기
    tmp.punch= op1 + op2.punch; // punch 더하기
    return tmp; // 임시객체리턴
}
Power operator+( Power op1,int op2) {
    Power tmp; // 임시객체생성
    tmp.kick= op1.kick+op2; // kick 더하기
    tmp.punch= op1.punch+op2;// punch 더하기
    return tmp; // 임시객체리턴
}


int main() {
    Power a(3,5), b,c;
    a.show();
    b.show();
    b = 2 + a; // 파워객체더하기연산
    c=a+3;
    a.show();
    b.show();
    c.show();
}*/
/*
class Power {
    int kick;
    int punch;
public:
    Power(int kick=0, int punch=0) {
    this->kick = kick; this->punch = punch;
}
void show();
    friend Power operator+(Power op1, Power op2); // 프렌드선언
    friend Power operator-(Power op1, Power op2); 
};
void Power::show() {
    cout<< "kick=" << kick << ',' << "punch=" << punch << endl;
}
Power operator+(Power op1, Power op2) {
    Power tmp; // 임시객체생성
    tmp.kick= op1.kick + op2.kick; // kick 더하기
    tmp.punch= op1.punch + op2.punch; // punch 더하기
    return tmp; // 임시객체리턴
}

Power operator-(Power op1, Power op2) {
    Power tmp; // 임시객체생성
    tmp.kick= op1.kick - op2.kick; // kick 더하기
    tmp.punch= op1.punch - op2.punch; // punch 더하기
    return tmp; // 임시객체리턴
}


int main() {
    Power a(3,5), b(4,6), c,d;
    c = a + b; // 파워객체+연산
    d=b-a;
    a.show();
    b.show();
    c.show();
    d.show();
}*/
/*
class Power {
    int kick; 
    int punch;
public:
Power(int kick=0, int punch=0) { this->kick = kick; this->punch = punch; }
void show();
    friend Power& operator++(Power& op); // 전위++ 연산자함수프렌드선언
    friend Power operator++(Power& op, int x); // 후위++ 연산자함수프렌드선언
    friend Power& operator--(Power& op); // 전위++ 연산자함수프렌드선언
    friend Power operator--(Power& op, int x); // 후위++ 연산자함수프렌드선언
};
void Power::show() {
cout<< "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& operator++(Power& op) { // 전위++ 연산자함수구현
    op.kick++;
    op.punch++;
    return op; // 연산결과리턴
} 

Power operator++(Power& op, int x) { // 후위++ 연산자함수구현
    Power tmp= op; // 변경하기전의op 상태저장
    op.kick++;
    op.punch++;
    return tmp; // 변경이전의op 리턴
}

Power& operator--(Power& op) { // 전위++ 연산자함수구현
    op.kick--;
    op.punch--;
    return op; // 연산결과리턴
} 

Power operator--(Power& op, int x) { // 후위++ 연산자함수구현
    Power tmp= op; // 변경하기전의op 상태저장
    op.kick--;
    op.punch--;
    return tmp; // 변경이전의op 리턴
}
int main() {
Power a(3,5), b;
    b = --a; // 전위++ 연산자
    a.show();
    b.show();
    b = a--; // 후위++ 연산자
    a.show(); 
    b.show();
}*/

class Power {
    int kick;
    int punch;
public:
Power(int kick = 0, int punch = 0) {
    this->kick = kick; this->punch = punch;
}
void show();
    Power& operator << (int n); // 연산후Power 객체의참조리턴
    Power& operator >> (int n);
};
void Power::show() {
    cout<< "kick=" << kick << ',' << "punch=" << punch << endl;
}
Power& Power::operator <<(int n) {
    kick += n;
    punch += n;
    return *this; // 이객체의참조리턴
}
Power& Power::operator >>(int n) {
    kick -= n;
    punch -= n;
    return *this; // 이객체의참조리턴
}

int main() {
    
    int kick,height;
    cout<<"kick과 height값 입력";
    cin>>kick>>height;
    Power b(kick,height);
    int n;
    cout<<"더할 정수 값 입력";
    cin>>n;
    b<<n;
    cout<<"빼기할 정수 값 입력";
    cin>>n;
    b>>n;
    b.show();
}