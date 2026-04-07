#include <iostream> 
#include <string>
using namespace std;

/*
class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int r) { radius = r; }
    void setRadius(int r) { radius = r; }
    double getArea();
};
double Circle::getArea() {
        return 3.14*radius*radius;
}

int main() {
    Circle circleArray[3]; // (1) Circle 객체 배열 생성
// 배열의 각 원소 객체의 멤버 접근
    
    for(int i=0; i<3; i++){// 배열의 각 원소 객체의 멤버 접근
        cout<<"정수 입력"<<endl;
        int radius;
        cin>>radius;
        circleArray[i].setRadius(radius);
        cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
} 
    Circle *p; // (3)
    p  = circleArray; // (4)
    for(int i=0; i<3; i++) { // 객체 포인터로 배열 접근
        cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
        p++; // (5)
    }
}
*/

/*
class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int r) { radius = r; }
    void setRadius(int r) { radius = r; }
    void getRadius(){radius=1;}
    double getArea();
};
double Circle::getArea() {
    return 3.14*radius*radius;
}
int main() {
    Circle circleArray[3];
    for(int i=0; i<3; i++){
        cout<<"정수 입력";
        int radius;
        cin>>radius;
        if (radius!=1){
            circleArray[i].setRadius(radius);
            double getradius=circleArray[i].getArea();
        }

        else{

            circleArray[i].getRadius();
        }
       
        
    }
    for(int i=0; i<3;i++){
        if(circleArray[i].getArea() != 3.14 ){
            cout<<i<<"번 째의 면적은" <<circleArray[i].getArea()<<"입니다"<<endl;
        }
        else{ continue; }
    }
}
*/
/*
class Circle {
    int radius; 
public:
    Circle() { radius = 1; }
    Circle(int r)  { radius = r; }
    void setRadius(int r)  { radius = r; } 
    double getArea(); 
}; 
double Circle::getArea() {
    return 3.14*radius*radius;
}

int main() {
    Circle circles[2][3]={ {Circle(1),Circle(2),Circle(3)},
                            {Circle(4),Circle(5),Circle(6)}};
    
    for(int i=0; i<2; i++)  
        for(int j=0; j<3; j++) {
            cout<< "Circle [" << i<< "," << j << "]의면적은";
            cout<< circles[i][j].getArea() <<endl;
        }
}*/

/*
int main() {
    cout << "입력할 정수의 개수는? ";

    int n;
    cin >> n;

    while (n <= 0) {
        cout << "양수를 입력하시오: ";
        cin >> n;
    }

    int *p = new int[n];   // 여기서 한 번만 선언

    for (int i = 0; i < n; i++) {
        cout << i + 1 << "번째 정수: ";
        cin >> p[i];
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += p[i];
    }

    cout << "평균 = " << sum / n << endl;

    delete[] p;
    return 0;
}*/