#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstring>
using namespace std;
/*
int sum(int a, int b){
    int s=0;
    if (a<b){
        for(int i=a;i<=b;i++){
            s+=i;
        }   
    }
    else{
         for(int i=b;i<=a;i++){
            s+=i;
        }   
    }
    return s;
}

int sum(int a){
    int s=0;
    for(int i=0;i<a;i++){
        s+=i;
    }
    return s;
}

int main() {
    cout << sum(5, 2) << endl;
    cout << sum(3) << endl;
    cout << sum(100) << endl;
}*/

void f(char c='X', int line=1);


void f(char c, int line) {
    if(line ==1){
        for(int j=0; j<5; j++)
            cout << c;
        cout << endl;
    
    }
    else{
        for(int j=0; j<line; j++)
            cout << c;
        cout << endl;
        
    }
}
int main() {
    f(); // 한줄에 빈칸을 10개 출력한다.
    f('%'); // 한 줄에 '%'를 10개 출력한다.
    f('A', 3); // 5 줄에 '@' 문자를 10개 출력한다.
}

/*
void fillLine(int n=25,char c='*'){
    for(int i=0;i<n;i++){
        cout<<c;
    }
    cout<<endl;
}

int main() {
    fillLine(); // 25개의 '*'를 한 라인에 출력
    fillLine(10, '%'); // 10개의 '%'를 한 라인에 출력
}*/
/*
class MyVector{
    int *p;
    int size;
public:
    MyVector(int n=100){
        p=new int[n];
        size=n;
    }
    ~MyVector(){delete[] p;}
};

int main() {
    MyVector *v1, *v2;
    v1 = new MyVector(); // 디폴트로 정수 100개의 배열 동적 할당
    v2 = new MyVector(1024); // 정수 1024개의 배열 동적 할당
    delete v1;
    delete v2;
}*/