#include <stdio.h>
#include <stdlib.h>
//定義student 的結構
struct Student{ // 建立一個多種類型的結構
    char name[20];
    int eng;
    int math;
};
//typedef為改類型的名稱, 陣列名稱為st
typedef struct Student STUDENT;
void printStudent(STUDENT st)

{
    printf("%s %d %d\n",st.name,st.eng,st.math);
}
void inputstudent(STUDENT *pst)//指向陣列st的指標

{
    printf("input information:");
    scanf("%s %d %d",&pst->name,&pst->eng,&pst->math);//指向指標變數
}

int main()
{
    STUDENT st1={"amy",100,90};
    printStudent(st1);


    STUDENT st2;
    inputstudent(&st2);// 資料位置
    printStudent(st2);

}
