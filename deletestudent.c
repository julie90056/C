#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student{
    char name[20];
    int eng;
    int math;
};
typedef struct Student STUDENT;

void printStudent(STUDENT*ptmp);
void deleteStudent();
#define size 2
    STUDENT st[size];
    STUDENT a={"John",100,100};
    STUDENT b={"Mary", 80,80};


int main()
{

    printStudent(&a);
    printStudent(&b);
    printf("%s", a.name);
    STUDENT delname;
    printf("請輸入要刪除的人名資料:\n");
    scanf(" %s %d %d",&delname.name, &delname.eng,&delname.math);
    printf("%s %d %d",delname.name,delname.eng,delname.math);
    int x = strcmp(a.name,delname.name);
    if (x==0){
        int index =1;
        st[index].name[0]=0;

    }else{
    printf("沒有這個人");

    }
    printAllStudents();


}
void printAllStudents()
{
    for (int i =0;i<size;i++){
        if(st[i].name[0]!=0){
            printStudent(&st[i]);
        }
    }

}


void printStudent(STUDENT*ptmp)
{
    printf("%s\t%d\t%d\n",ptmp->name,ptmp->eng,ptmp->math);
}
