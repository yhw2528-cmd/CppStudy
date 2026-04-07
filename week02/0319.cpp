#include <iostream> 
#include <string>
using namespace std;
/*
class Circle {
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14*radius*radius; }
};
Circle::Circle() : Circle(1) {
    
    cout << " 기본 생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r) {
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}
int main() {
    Circle *p, *q;
    p = new Circle;
    q = new Circle(30);
    cout << p->getArea() << endl << q->getArea() << endl;
    delete p;
    delete q;
}
*/


/*
#include <iostream>
using namespace std;
class Circle {
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14*radius*radius; }
};
Circle::Circle() {
    radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r) {
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
    int radius;
    while(true) {
        cout << "정수 반지름 입력(음수이면 종료)>> ";
        cin >> radius;
        if(radius < 0) break; // 음수가 입력되어 종료한다.
            Circle *p = new Circle(radius); // 동적 객체 생성
            cout << "원의 면적은 " << p->getArea() << endl;
    delete p; // 객체 반환  

    }
}

*/
/*
class Circle {
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14*radius*radius; }
};
Circle::Circle() {
    radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r) {
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
    Circle *pArray = new Circle [5]; // 객체 배열 생성
    int num;
    int count=0;
    for(int i=0; i<5; i++) {
        cout<<"양수릅 입력하시오";
        cin>>num;
        if(num>0){
            pArray[i].setRadius(num);
            count++;
        }
        else{
            
            break;
        }
    }

    Circle *p = pArray; // 포인터 p에 배열의 주소값으로 설정
    for(int i=0; i<count; i++) {
        cout << p->getArea() << '\n';
        p++; // 다음 원소의 주소로 증가
    }
    delete [] pArray; // 객체 배열 소멸
}*/


/*
class Circle {
    int radius;
public:
    Circle();
    ~Circle() { }
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14*radius*radius; }
};
Circle::Circle() {
    radius = 1;
}

int main() {
    cout << "생성하고자 하는 원의 개수?";
    int n, radius;
    cin >> n; // 원의 개수 입력
    Circle *pArray = new Circle [n]; // n 개의 Circle 배열 생성
    for(int i=0; i<n; i++) {
        cout<<"양수입력";
        cin>>radius;
        while (radius <= 0){
            cout<<"양수를 다시 입력하시오";
            cin>>radius;
        }
        pArray[i].setRadius(radius);
    }
    int count =0; // 카운트 변수
    Circle* p = pArray;
    for(int i=0; i<n; i++) {
        double area = p->getArea();
        cout << area << ' ';
        if(area >= 100 && area <= 200)
            count++;
            p++;
    }
    cout << endl << "면적이 100에서 200 사이인 원의 개수는 "
    << count << endl;
    delete [] pArray; // 객체 배열 소멸
}*/

/*
int main() {
    string names[5];
    int n = 0;  // 실제 입력 개수

    // 입력
    for (int i = 0; i < 5; i++) {
        cout << "이름 >> ";
        getline(cin, names[i]);

        if (names[i] == "") {  // 엔터 입력 시 종료
            break;
        }
        n++;  // 입력 개수 증가
    }

    // 버블 정렬 (사전순)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (names[j] > names[j + 1]) {  // 사전순 비교
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    // 출력
    cout << "사전순으로 정렬된 이름:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }
}
*/

/*
int main() {
    string s;
    cout << "문자열을 입력하세요(한글 안됨) " << endl;
    getline(cin, s, '\n');
    int len = s.length();

    int count = 1;
    for (int i = 0; i < len; i++) {
        if (s[i] == ' ')
            count++;
    }

    for (int i = 0; i < count; i++) {
        cout << s << endl;

        int startindex = s.find(" ");
        string first = s.substr(0, startindex);
        string sub = s.substr(startindex + 1, len);
        s = sub + " " + first;
    }
}*/
/*
int main(){
    string s;
    cout<<"덧셈 문자를 입력하시오";
    getline(cin,s,'\n');
    int sum=0;
    int startindex=0;
    string part;
    while(true){
        int finalindex=s.find("+",startindex);
        if (finalindex ==-1){
            part=s.substr(startindex,s.length());
            if (part==""){break;}
            sum+=stoi(part);
            break;
        }
        part=s.substr(startindex,finalindex);
        sum+=stoi(part);
    }
    cout<<"최종 합은"<<sum<<endl;
    return 0;
}

*/

/*
int main() {
    string s;
    cout<< "여러줄의문자열을입력하세요. 입력의끝은&문자입니다." << endl;
    getline(cin, s, '&'); // 문자열입력
    cin.ignore(); 
    string f, r;
    cout<< endl<< "find: ";
    getline(cin, f, '\n'); // 검색할문자열입력
    cout<< "replace: ";
    getline(cin, r, '\n'); // 대치할문자열입력
    int startIndex= 0;
    while(true) {
        int fIndex= s.find(f, startIndex); // startIndex부터문자열f 검색
        if(fIndex== -1)
            break; // 문자열s의끝까지변경하였음
        s.replace(fIndex, f.length(), r); // fIndex부터문자열f의길이만큼문자열r로변경
        startIndex= fIndex+ r.length();
        }
    cout<< s << endl;
}*/



void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

int main() {
    string names[5];
    int n = 0;

    for (int i = 0; i < 5; i++) {
        cout << "이름 >> ";
        getline(cin, names[i]);

        if (names[i] == "") {
            break;
        }
        n++;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                swap(names[j], names[j + 1]);
            }
        }
    }

    cout << "사전순으로 정렬된 이름:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}