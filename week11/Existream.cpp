#include <iostream>
using namespace std;

/*
int main() {

    cout.put('H');
    cout.put('i');
    cout.put(33); 
    cout.put('\n');
    // "C++ "을출력한다.
    cout.put('C').put('+').put('+').put(' ');
    char str[]="I love programming";
    cout.write(str, 6);
}*/

/*
void get1(){
    cout<<"cin.get()로 <Enter> 키까지 입력 받고 출력합니다>>";
    int ch;
    while((ch = cin.get()) != EOF){
        cout.put(ch);
        if(ch=='\n')
            break;
    }
}

void get2(){
    cout<<"cin.get(char&)로 <Enter> 키까지 입력 받고 출력합니다>>";
    char ch;
    while(true){
        cin.get(ch);
        if(cin.eof())break;
        cout.put(ch);
        if(ch=='\n')
            break;
    }
}

int main(){
    get1();
    get2();
}*/
/*
int main(){
    char line[80];
    cout<<"cin.getline() 함수로 라인을 읽습니다"<<endl;
    cout<<"exit를 입력하면 루프가 끝납니다"<<endl;

    int no=1;
    while (true)
    {
        cout<<"라인"<<no <<">>";
        cin.getline(line,80);
        if(strcmp(line,"exit")==0)
            break;
        cout<<"echo-->";
        cout<<line<<endl;
        no++;
    }
    
}*/

/*
int main() {
    char cmd[80];
    cout<< "cin.get(char*, int)로문자열을읽습니다." << endl;
    while(true) {
    cout<< "종료하려면exit을입력하세요>> ";
    cin.get(cmd, 80); // 79개까지의영어문자읽음.
    if(strcmp(cmd, "exit") == 0) {
    cout<< "프로그램을종료합니다...."; 
    return 0;
    }
    else
    cin.ignore(1); // 버퍼에남아있는<Enter> 키('\n') 제거
    }
}*/

/*
int main() {
    cout<< 30 << endl; // 10진수로출력
    cout.unsetf(ios::dec); // 10진수해제
    cout.setf(ios::hex); // 16진수로설정
    cout<< 30 << endl;
    cout.setf(ios::showbase); // 16진수로설정
    cout<< 30 << endl;
    cout.setf(ios::uppercase); // 16진수의A~F는대문자로출력
    cout<< 30 << endl;
    cout.setf(ios::dec | ios::showpoint); // 10진수표현과동시에
    // 소숫점이하나머지는0으로출력
    cout<< 23.5 << endl;
    cout.setf(ios::scientific); // 실수를과학산술용표현으로출력
    cout<< 23.5 << endl;
    cout.setf(ios::showpos); // 양수인경우+ 부호도함께출력
    cout<< 23.5; 
}
*/

void showWidth() {
    cout.width(10); // 다음에출력되는"hello"를10 칸으로지정
    cout<< "Hello" << endl;
    cout.width(5); // 다음에출력되는정수12를5 칸으로지정
    cout<< 12 << endl;
    cout<< '%';
    cout.width(10); // 다음에출력되는"Korea/"만10 칸으로지정
    cout<< "Korea/" << "Seoul/" << "City" <<endl;
}
int main() {
    showWidth(); 
    cout<< endl;
    cout.fill('^'); 
    showWidth();
    cout<< endl;
    cout.precision(5); 
    cout<< 11./3. << endl;
}
