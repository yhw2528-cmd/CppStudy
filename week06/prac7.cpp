#include<iostream>
using namespace std;

class Power{
    int kick,punch;
public:
    Power(int kick=0,int punch=0){
        this->kick=kick;
        this->punch=punch;
    }

    void show();
    Power operator++(int x);
    Power operator--(int x);
};

void Power::show(){
    cout<<"kick="<<kick<<"punch="<<punch<<endl;
}

Power Power::operator++(int x){
    Power tmp=*this;
    kick++;
    punch++;
    return tmp;
}

Power Power::operator--(int x){
    Power tmp=*this;
    kick--;
    punch--;
    return tmp;
}


int main() {
    Power a(3,5), b;
    a.show();
    b.show();
    b = a++; // 후위++ 연산자사용
    a.show(); // a의파워는1 증가됨
    b.show(); // b는a가증가되기이전상태를가짐
    b--;
    b.show();
}