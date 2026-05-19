#include <iostream>
#include <iomanip>
using namespace std;

/*
int main() {
    cout << hex << showbase << 30 << endl;
    cout << dec << showpos << 100 << endl;
    cout << true << ' ' << false << endl;
    cout << boolalpha << true << ' ' << false << endl;
}
*/
/*
int main() {
    cout<< showbase;
    // 타이틀을출력한다.
    cout<< setw(8) << "Number";
    cout<< setw(10) << "Octal";
    cout<< setw(10) << "Hexa" << endl;
    // 하나의수를십진수, 8진수, 16진수형태로한줄에출력한다.
    for(int i=0; i<50; i+=5) { 
    cout<< setw(8) << setfill('.') << dec<< i; // 10진수
    cout<< setw(10) << setfill(' ') << oct<< i; // 8진수
    cout<< setw(10) << setfill(' ') << hex << i<< endl; // 16진수
    }
}
*/

/*
class Point {
    int x, y;
public:
    Point(int x=0, int y=0) : x(x), y(y) {}
    friend ostream& operator<<(ostream& stream, Point a);
};

ostream& operator<<(ostream& stream, Point a) {
    stream << "(" << a.x << "," << a.y << ")";
    return stream;
}

class ColorPoint : public Point {
    string color;
public:
    ColorPoint(int x=0, int y=0, string color="black")
        : Point(x, y), color(color) {}
    
    friend ostream& operator<<(ostream& stream, ColorPoint a);
};

// color 첫 글자 대문자 + Point의 << 재활용
ostream& operator<<(ostream& stream, ColorPoint a) {
    string c = a.color;
    c[0] = toupper(c[0]); // 첫 글자 대문자
    stream << c << ": " << (Point)a;
    return stream;
}

int main() {
    Point p(3, 4);
    cout << p << endl;

    Point q(1, 100), r(2, 200);
    cout << q << r << endl;

    ColorPoint cp(10, 20, "black");
    cout << cp << endl; // Black: (10,20)
}*/
/*
class Book {
    string title;
    string press;
    string author;
public:
    Book(string title="", string press="", string author="") {
        this->title = title;
        this->press = press;
        this->author = author;
    }
    friend ostream& operator<<(ostream& stream, Book b);
};

ostream& operator<<(ostream& stream, Book b) {
    stream << "제목: " << b.title << endl;
    stream << "출판사: " << b.press << endl;
    stream << "저자: " << b.author << endl;
    return stream;
}

int main() {
    string title, press, author;
    
    cout << "책 제목을 입력하시오: ";
    getline(cin, title);
    
    cout << "출판사를 입력하시오: ";
    getline(cin, press);
    
    cout << "저자를 입력하시오: ";
    getline(cin, author);
    
    Book book(title, press, author);
    cout << "\n" << book;
}*/

/*
class Point {
    int x, y;
public:
    Point(int x=0, int y=0) {
        this->x = x;
        this->y = y;
    }
    friend istream& operator>>(istream& ins, Point &a);
    friend ostream& operator<<(ostream& stream, Point a);
};

istream& operator>>(istream& ins, Point &a) {
    cout << "x 좌표>>";
    ins >> a.x;
    cout << "y 좌표>>";
    ins >> a.y;
    return ins;
}

ostream& operator<<(ostream& stream, Point a) {
    stream << "(" << a.x << "," << a.y << ")";
    return stream;
}

// ── ColorPoint 클래스 ──
class ColorPoint : public Point {
    string color;
public:
    ColorPoint(int x=0, int y=0, string color="black")
        : Point(x, y), color(color) {}

    friend istream& operator>>(istream& ins, ColorPoint &a);
    friend ostream& operator<<(ostream& stream, ColorPoint a);
};

istream& operator>>(istream& ins, ColorPoint &a) {
    ins >> (Point&)a;          // Point의 >> 재사용 (x, y 입력)
    cout << "color>>";
    ins >> a.color;
    return ins;
}

ostream& operator<<(ostream& stream, ColorPoint a) {
    string c = a.color;
    c[0] = toupper(c[0]);      // 첫 글자 대문자
    stream << c << ": " << (Point)a;
    return stream;
}

int main() {
    // Point 테스트
    Point p;
    cin >> p;
    cout << p << endl;

    // ColorPoint 테스트
    ColorPoint cp;
    cin >> cp;
    cout << cp << endl;
}*/
/*
ostream& fivestar(ostream& outs) {
    return outs << "*****";
}
ostream& rightarrow(ostream& outs) {
    return outs << "---->";
}
ostream& beep(ostream& outs) {
    return outs << '\a'; // 시스템beep(삑소리) 발생
}
int main() {
    cout<< "벨이울립니다" <<beep << endl;
    cout<< "C" << rightarrow<< "C++" << rightarrow<< "Java" << endl;
    cout<< "Visual" <<fivestar<< "C++" << endl;
}
*/

istream& question(istream& ins) {
    cout<< "거울아거울아누가제일예쁘니?";
    return ins;
}
int main() {
    string answer;
    cin>> question>> answer;
    cout<< "세상에서제일예쁜사람은" << answer << "입니다." << endl;
}