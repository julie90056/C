#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string id;
    cout<<"請輸入id:";
    cin>>id;
    string msg;
    if (id=="tom"){
        msg = "welcome!!"+id;
    }else{

    msg = "錯誤的id"+id;
    }
    cout<<msg<<endl;

}
