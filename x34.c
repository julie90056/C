#include <stdio.h>
#include <stdlib.h>
//定義student 的結構
struct Student{ // 建立一個多種類型的結構
    char name[20];
    int eng;
    int math;
};
int i=3;
typedef struct Student STUDENT;
void printStudent(STUDENT *pst)

{
    printf("%s\t %d\t %d\n",pst->name,pst->eng,pst->math);
}
void inputstudent(STUDENT *pst)//指向陣列st的指標

{
    printf("input information:");
    scanf("%s %d %d",pst->name,&pst->eng,&pst->math);//指向指標變數
}
int main()
{
    STUDENT a[3];
    for (int i=0;i<3;i++){
        inputstudent(&a[i]);//將檔案存入地址
        printStudent(&a[i]);

    }
    printf("----------------------\n");
    printf("Name\t eng\t math \n");
    for (int i=0;i<3;i++){
    printStudent(&a[i]);
    }



}

