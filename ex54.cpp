#include <iostream>
#include <cstring>
using namespace std;
class Account{
private:
    string name;
    int id;
    int money;
    int balance=0;
    static int count;
    static int id_count;

public:
    Account()
    {
        count++;
        id_count++;
        id=id_count;
        cout<<"帳戶物件建立了"<<endl;
    }
    ~Account()
    {
        count--;
        cout<<" "<<endl;
    }
    static int getCount()
    {
        return count;
    }
    void setName(string name){
    if (name.length()<3){
        cout<<"設定失敗, 名字有誤"<<endl;
        return;
    }
    cout<<"名字設定成功"<<name<<endl;
    this->name=name;
    }
    void setBalance(int balance){
        if (balance<100){
        cout<<"餘額設定失敗, 金額不能少於100"<<endl;
        return ;
    }
    cout<<"餘額設定成功:"<<balance<<endl;
    this->balance= balance;

    }
    void deposit(int money){
        if (money<300){
            cout<<"存款金額不能少於300"<<endl;
            return ;
        }
        cout<<"存款成功"<<money<<endl;

        this->balance=money+balance;
    }
//成員函式
    void input()
    {
        cout<<"輸入名字資料:"<<endl;
        cout<<"name:";
        cin>>name;

        cout<<"餘額設定";
        cin>>balance;
    }
    void print()
    {

    cout<<"ID"<<"\t"<<"Name"<<"\t"<<"Balance"<<endl;
    cout<<id<<"\t"<<name<<"\t"<<balance<<"\n"<<endl;

    }

};
int Account::count =0;
int Account::id_count=0;


// 靜態成員初始值必須寫在類別外面,  取用static物件時，也要用'::'指明：我要取用static_test的物件
int main()
{

    Account a;
    a.print();

    a.setName("to");
    a.setName("Tom");
    a.setBalance(10);
    a.setBalance(1000);
    a.print();

    a.deposit(200);
    a.deposit(500);
    a.print();
}



