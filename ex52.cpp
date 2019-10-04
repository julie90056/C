#include <iostream>
#include <cstring>
using namespace std;
class Student{ //student 類別是命名空間
private:
    string name;
    int eng;
    int math;
    static int count;
    //目前人數(靜態資料只有一分, 資料不在學生物件當中, 不受物件建構影響)
public:
    Student()
    {
        count++;
        cout<<"建構式執行, 學生資料空間準備好了"<<endl;

    }
    ~Student()
    {
        cout<<"解構式執行, 學生資料空間不再使用"<<endl;
    }
    static int getCount()
    {

        return count;
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
int Student::count=0;
// 靜態成員初始值必須寫在類別外面,  取用static物件時，也要用'::'指明：我要取用static_test的物件
int main()
{
    cout<<"目前人數:"<<Student::getCount()<<endl;
    Student a;
    cout<<"目前人數:"<<Student::getCount()<<endl;
    a.input();
    a.print();
    cout<<"目前人數:"<<Student::getCount()<<endl;
    Student b;
    cout<<"目前人數:"<<Student::getCount()<<endl;
    b.input();
    b.print();

}


