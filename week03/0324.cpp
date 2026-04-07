#include <iostream> 
#include <string>
using namespace std;
/*
int main() {
    cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
    int i,n;
    cout<<"i의 값을 입력"<<endl;
    cin>>i;
    cout<<"n의 값 입력"<<endl;
    cin>>n;
    int &refn = n; 
    n = 4;
    refn++; 
    cout << i << '\t' << n << '\t' << refn << endl;
    refn = i; 
    refn++; 
    cout << i << '\t' << n << '\t' << refn << endl;
    int *p = &refn;
    *p = 20; 
    cout << i << '\t' << n << '\t' << refn << endl;
}
*/
/*
bool average(int a[], int size, double& avg) {
    if(size <= 0)
        return false;
    int sum = 0;
    for(int i=0; i<size; i++)
        sum += a[i];
    avg = double(sum)/size;
    return true;
}
int main() {
    int x[] = {0,1,2,3,4,5};
    double avg;
    if(average(x, 6, avg)) cout << "평균은 " << avg << endl;
    else cout << "매개 변수 오류" << endl;
    if(average(x, -2, avg)) cout << "평균은 " << avg << endl;
    else cout << "매개 변수 오류" << endl;
    if(average(x, -2, avg)) cout << "평균은 " << avg << endl;
    else cout << "매개 변수 오류 " << endl;
}
*/
/*
class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14*radius*radius; }
};
void readRadius(Circle &c) {
    int r;
    cout << "정수 값으로 반지름을 입력하세요>>";
    cin >> r; // 반지름 값 입력
    while(r<=0){
        cout<<"양수 값으로 다시 입력하세요";
        cin>>r;
    }
    c.setRadius(r); // 객체 c에 반지름 설정
}

int main() {
    Circle donut;
    readRadius(donut);
    cout << "donut의 면적 = " <<donut.getArea() << endl;
}
*/