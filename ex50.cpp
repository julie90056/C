#include <iostream>
#include <cstring>
using namespace std;
class Student{ //student 類別是命名空間
private:
    string name;
    int eng;
    int math;
public:
    Student()
    {
        cout<<"建構式執行, 學生資料空間準備好了"<<endl;

    }
    ~Student()
    {
        cout<<"解構式執行, 學生資料空間不再使用"<<endl;
    }
//成員函式
    void input()
    {
        cout<<"輸入學生資料:"<<endl;
        cout<<"name:";
        cin>>name;

        cout<<"eng";
        cin>>eng;

        cout<<"math";
        cin>>math;
    }
    void print()
    {

    cout<<"輸出學生資料"<<endl;
    cout<<"name\tEng\tMath\tSum\tAvg\t"<<endl;
    cout<<name<<"\t"<<eng<<"\t"<<math<<"\t"
       <<(eng+math)<<"\t"<< (eng+math)/2.0<<endl;
    }

    void setName(string name){
    if (name.length()<3){
        cout<<"設定失敗, 名字有誤"<<endl;
        return;
    }
    this->name=name;

    }
    void seteng(int engscore){
        if (0>engscore || engscore>100){
        cout<<"設定失敗, 分數有誤"<<endl;
        return ;
    }this->eng= engscore;

    }
    void setmath(int score2){
        if (0>score2 || score2>100){
        cout<<"設定失敗, 分數有誤"<<endl;
        return ;
    }
    this->math=score2;
    }
};

int main()
{
    Student a;
    a.input();
    a.print();

    a.setName("jojo");
    a.seteng(97);
    a.setmath(99);
    a.print();


}

