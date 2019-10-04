#include <iostream>
#include <cstring>
using namespace std;
class Student{ //student 類別是命名空間
public:
    string name;
    int eng;
    int math;
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

};

int main()
{
    Student a;
    a.input();
    a.print();
}





