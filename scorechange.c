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
}//name 是陣列, 直接就是位置
void inputstudent(STUDENT *pst)//指向陣列st的指標

{
    printf("input information:");
    scanf("%s %d %d",&pst->name,&pst->eng,&pst->math);//指向指標變數
}
//整個學生都換掉
void swapStudent(STUDENT *pst1,STUDENT *pst2){
    STUDENT s=*pst1;
    *pst1=*pst2;
    *pst2=s;
}
//只換xx成績
void swapeng(STUDENT *pst1,STUDENT *pst2){
    int c;
    c=pst1->eng;
    pst1->eng=pst2->eng;
    pst2->eng=c;
}
void swapStudent2(STUDENT *pst1,STUDENT *pst2){
    swapname(pst1->name,pst2->name,20);
    swapint(&pst1->eng,&pst2->eng);
    swapint(&pst1->math,&pst2->math);
}
void swapchar(char *pa,char *pb){
    char c;
    c=*pa;
    *pa=*pb;
    *pb=c;
}

void swapname(char name1[],char name2[],int len){
    for (int i=0;i<len;i++){
        swapchar(&name1[i],&name2[i]);
    }

}

int main()
{

    STUDENT a={"amy",100,90};
    STUDENT b={"john",80,85};
    printStudent(&a);
    printStudent(&b);
    printf("--------------------\n");
    swapeng(&a,&b);
    printStudent(&a);
    printStudent(&b);
    printf("--------------------\n");
    swapname(&a,&b);
    swapchar(&a,&b);
    printStudent(&a);
    printStudent(&b);



}
