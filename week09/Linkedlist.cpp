int main(){
    Shape *pStart = NULL;
    Shape *pLast = NULL;
    int num;
    
    // 4번 반복해서 입력받고 연결
    for(int i = 0; i < 4; i++){
        // 1~3 범위 밖이면 다시 입력
        while(1){
            cout << "1. Line  2. Circle  3. Rect: ";
            cin >> num;
            if(num >= 1 && num <= 3) break;
            cout << "잘못된 입력입니다. 다시 입력하세요" << endl;
        }
        
        // 번호에 맞게 객체 생성
        Shape* s;
        if(num == 1)      s = new Line();
        else if(num == 2) s = new Circle();
        else              s = new Rect();
        
        // 연결리스트에 연결
        if(pStart == NULL){
            pStart = s;
            pLast = s;
        } else {
            pLast = pLast->add(s);
        }
    }
    
    // 모든 도형 출력
    Shape* p = pStart;
    while(p != NULL){
        p->paint();
        p = p->getNext();
    }
    
    // 모든 도형 삭제
    p = pStart;
    while(p != NULL){
        Shape* q = p->getNext();
        delete p;
        p = q;
    }
}