#include<iostream>
using namespace std;
/*
class Circle {
    int radius;
public:
    Circle(int radius=1) { this->radius = radius; }
    int getRadius() { return radius; }
};
template <class T> 
void myswap(T & a, T & b) {
    T tmp;
    tmp= a;
    a = b;
    b = tmp;
}

int main() {
    int a=4, b=5;
    myswap(a, b);
    cout<< "a=" << a << ", " << "b=" << b << endl;
    double c=0.3, d=12.5;
    myswap(c, d);
    cout<< "c=" << c << ", " << "d=" << d << endl;
    Circle donut(5), pizza(20);
    myswap(donut, pizza);
    cout<< "donut반지름=" << donut.getRadius() << ", ";
    cout<< "pizza반지름=" << pizza.getRadius()<< endl;
}
*/
/*
template <class T>
T add(T data[], int n) {
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += data[i];
    }
    return sum;
}

template <class T>
T average(T data[], int n) {
    T avg = add(data, n) / n;
    return avg;
}

int main() {
    int n;
    cout<<"입력할 개수 입력:"<<endl;
    cin>>n;
    int x[n];
    double d[n];
    for(int i=0;i<n;i++){
        cout<<"정수 입력:";
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        cout<<"실수 입력:";
        cin>>d[i];
    }

    cout << "sum of x[] = " << add(x, n) << endl;      // 15
    cout << "sum of d[] = " << add(d, n) << endl;      // 23.7
    cout << "avg of x[] = " << average(x, n) << endl;  // 3 (int라서 소수점 버림)
    cout << "avg of d[] = " << average(d, n) << endl;  // 3.95
}*/


template <class T1, class T2> 
    void mcopy(T1 src[], T2 dest[], int n) { // src[]의n개원소를dest[]에복사하는함수
    for(int i=0; i<n; i++) 
    dest[i] = (T2)src[i]; // T1 타입의값을T2 타입으로변환한다.
}
int main() {
    int x[] = {1,2,3,4,5};
    double d[5];
    char c[5] = {'H', 'e', 'l', 'l', 'o'}, e[5];
    mcopy(x, d, 5); // intx[]의원소5개를double d[]에복사
    mcopy(c, e, 5); // char c[]의원소5개를char e[]에복사
    for(int i=0; i<5; i++) cout<< d[i] << ' '; // d[] 출력
    cout<< endl;
    for(int i=0; i<5; i++) cout<< e[i] << ' '; // e[] 출력
    cout<< endl;
}