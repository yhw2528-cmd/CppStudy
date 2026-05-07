#include <iostream>
#include <string>
using namespace std;

// Point 클래스 추가
class Point {
    int x, y;
public:
    Point(int x=0, int y=0) { this->x = x; this->y = y; }
    void show() { cout << '(' << x << ',' << y << ')' << endl; }
};

template <class T>
class MyStack {
    int tos;
    T data[3];  // ✅ 크기를 3으로 수정
public:
    MyStack();
    void push(T element);
    T pop();
    bool isFull();   // ✅ 대소문자 통일
    bool isEmpty();
};

template <class T>
MyStack<T>::MyStack() {
    tos = -1;
}

template <class T>
bool MyStack<T>::isFull() {
    if (tos + 1 == 3) return true;  // ✅ 크기 3에 맞게 수정
    else return false;
}

template <class T>
bool MyStack<T>::isEmpty() {
    if (tos == -1) return true;
    else return false;
}

template <class T>
void MyStack<T>::push(T element) {
    if (isFull()) {  // ✅ isFull로 통일
        cout << "stack full";
        return;
    }
    tos++;
    data[tos] = element;
}

template <class T>
T MyStack<T>::pop() {
    T retData;
    if (isEmpty()) {  // ✅ isEmpty로 통일
        cout << "stack empty";
        return 0;
    }
    retData = data[tos--];
    return retData;
}

int main() {
    MyStack<int*> ipStack;
    int* p = new int[4];
    for (int i = 0; i < 4; i++) p[i] = i * 10;  // 0,10,20,30
    ipStack.push(p);
    int* q = ipStack.pop();
    for (int i = 0; i < 4; i++) cout << q[i] << ' ';  // ✅ 4개 출력 (30까지)
    cout << endl;
    delete[] p;

    MyStack<Point> pointStack;
    Point a(2, 3), b;
    pointStack.push(a);
    b = pointStack.pop();
    b.show();

    MyStack<Point*> pStack;
    pStack.push(new Point(10, 20));
    Point* pPoint = pStack.pop();
    pPoint->show();

    MyStack<string> stringStack;
    string s = "c++";
    stringStack.push(s);
    stringStack.push("java");
    cout << stringStack.pop() << ' ';
    cout << stringStack.pop() << endl;
}