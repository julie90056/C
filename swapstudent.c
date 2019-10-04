#include <stdio.h>
#include <stdlib.h>
//定義student 的結構
struct Student{ // 建立一個多種類型的結構
    char name[20];
    int eng;
    int math;
};
typedef struct Student STUDENT;
void printStudent(STUDENT *pst)

{
    printf("%s\t %d\t %d\n",pst->name,pst->eng,pst->math);
}
void inputstudent(STUDENT *pst)//指向陣列st的指標

{
    printf("input information:");
    scanf("%s %d %d",&pst->name,&pst->eng,&pst->math);//指向指標變數
}
void swapStudent(STUDENT *pst1,STUDENT *pst2){
    STUDENT s=*pst1;
    *pst1=*pst2;
    *pst2=s;

}

int main()
{
    STUDENT a,b;
    inputstudent(&a);

    printStudent(&a);
    inputstudent(&b);
    printStudent(&b);
    printf("------------------------------\n");
    swapStudent(&a,&b);
    printStudent(&a);
    printStudent(&b);
}

