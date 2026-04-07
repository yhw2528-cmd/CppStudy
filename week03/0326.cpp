#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstring>
using namespace std;
/*
class Circle{
private:
    int radius;
public:
    Circle(const Circle & c);
    Circle(){radius=1;}
    Circle(int radius){this->radius=radius;}
    double getArea(){return 3.14* radius*radius;}
};

Circle::Circle(const Circle & c){
    this->radius=c.radius;
    cout<<"복사 생성자 실행 radius="<<radius<<endl;
}
int main(){
    Circle src(30);
    Circle dest(src);

    cout<<"원본의 면적:"<<src.getArea()<<endl;
    cout<<"원본의 면적:"<<dest.getArea()<<endl;
}*/

/*
class Person { // Person 클래스선언
    char* name;
    int id;
public:
    Person(int id, const char* name); // 생성자
    Person(const Person& person); // 복사생성자
    ~Person(); // 소멸자
    void changeName(const char *name);
    void show() { cout<< id << ',' << name << endl; }
};
Person::Person(int id, const char* name) { // 생성자
    this->id = id;
    int len= strlen(name); // name의문자개수
    this->name = new char [len+1]; // name 문자열공간핟당
    strcpy(this->name, name); // name에문자열복사
}
Person::Person(const Person& person) { // 복사생성자
    this->id = person.id; // id 값복사
    int len= strlen(person.name);// name의문자개수
    this->name = new char [len+1]; // name을위한공간핟당
    strcpy(this->name, person.name); // name의문자열복사
    cout<< "복사생성자실행. 원본객체의이름" << this->name << endl;
}
Person::~Person() {// 소멸자
    if(name) // 만일name에동적할당된배열이있으면
        delete [] name; // 동적할당메모리소멸
}
void Person::changeName(const char* name) { // 이름변경
    if(strlen(name) > strlen(this->name))
        return; // 현재name에할당된메모리보다긴이름으로바꿀수없다.
    strcpy(this->name, name);
}

int main() {
    Person father(1, "Kitae");
    Person daughter(father);
    // (1) father 객체 생성
    // (2) daughter 객체 복사 생성. 복사생성자호출
    cout << "daughter 객체 생성 직후----" << endl;
    father.show();
    // (3) father 객체 출력
    daughter.show();
    daughter.changeName("Grace");
    cout<<"daughter 이름을 Grace로 변경한 후 ----"<<endl;
    father.show();
    daughter.show();
    return 0;
} */
class Person {
    char* name;
    int id;
public:
    Person(int id, const char* name);      // 생성자
    Person(const Person& person);          // 복사 생성자
    ~Person();                             // 소멸자
    void changeName(const char *name);
    void show() { cout << id << ", " << name << endl; }
};

Person::Person(int id, const char* name) {
    this->id = id;
    int len = strlen(name);
    this->name = new char[len + 1];
    strcpy(this->name, name);
    cout << "생성자 실행: 객체 이름 " << this->name << endl;
}

Person::Person(const Person& person) {
    this->id = person.id;
    int len = strlen(person.name);
    this->name = new char[len + 1];
    strcpy(this->name, person.name);
    cout << "복사생성자 실행. 원본 객체의 이름 " << this->name << endl;
}

Person::~Person() {
    if(name)
        delete [] name;
}

void Person::changeName(const char *name) {
    if(this->name)
        delete [] this->name;

    int len = strlen(name);
    this->name = new char[len + 1];
    strcpy(this->name, name);
}

void f(Person person) {
    person.changeName("dummy");
}

Person g() {
    Person mother(2, "Jane");
    return mother;
}

int main() {
    Person father(1, "Kitae");
    Person son = father;
    f(father);
    g();

    father.show();
    son.show();

    return 0;
}