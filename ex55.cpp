#include <iostream>
#include <string>
using namespace std;

class Atm{
private:
    string name;
    int balance;



public:
    Atm(){

    cout<<"帳戶物件建立了"<<endl;
    cout<<"ATM 物件建立了"<<endl;

    }
    ~Atm()
    {

        cout<<" "<<endl;
    }
    void input()
    {
    do{
        cout<< "請輸入帳戶名稱(3個字以上):";
        cin>>name;
    }while(name.length()<3);
    cout<<"帳戶設定成功:"<<name<<endl;
    this->name= name;
    do {
        cout<< "請輸入帳戶餘額(100以上):";
        cin>>balance;
    }while(balance<100);
    cout<<"餘額設定成功:"<<balance<<endl;
    this->balance= balance;
    }

    void print()
    {

    cout<<"顯示帳戶"<<endl;
    cout<<name<<"\t"<<balance<<"\t"<<endl;

    }

};

int main(){

    Atm a;
    a.input();
    a.print();

}




