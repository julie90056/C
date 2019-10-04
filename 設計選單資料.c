#include <stdio.h>
#include <stdlib.h>
struct Student{
    char name[20];
    int eng;
    int math;
};
typedef struct Student STUDENT;
void inputStudent(STUDENT*ptmp);
void printStudent(STUDENT*ptmp);
void writeStudent(STUDENT*tmp);
void readStudent(STUDENT*tmp);

STUDENT st;
int options;

void menu(options){
    do{
    printf("請輸入要執行的\n"
           "1. 輸入學生資料\t 2. 顯示目前學生資料\t 3.儲存\t 4.載入\t 5. 結束\n");
    scanf("%d",&options);
    if (options==1){
        inputStudent(&st);
    }else if (options==2){
        printStudent(&st);
    }else if (options==3){
        writeStudent(&st);
    }else if (options==4){
        readStudent(&st);

    }
    }while (options!=5);

}

int main()
{

   int a;

        do {
            menu(&options);
            printf("你確定要結束? (y/n)");
            scanf("%s",&a);
            }while(a!='y');
}

void printStudent(STUDENT*ptmp)
{
    printf("%s\t%d\t%d\t",ptmp->name,ptmp->eng,ptmp->math);
}

void readStudent(STUDENT*tmp)
{
    //檔案指標
    FILE *fp;
    fp=fopen("student.txt","r");
    fscanf(fp,"%s %d %d \n", tmp->name,&tmp->eng,&tmp->math);
    //輸出到檔案
    fclose(fp);
    printf("----------------------------\n"
           "student.txt讀檔\n");

}
void inputStudent(STUDENT*ptmp)
{

    printf("input student:");
    scanf("%s %d %d",ptmp->name,&ptmp->eng,&ptmp->math);
    printf("\n");



}
void writeStudent(STUDENT*tmp)
{
    //檔案指標
    FILE *fp;
    fp=fopen("student.txt","w");
    fprintf(fp,"%s %d %d \n", tmp->name,tmp->eng,tmp->math);
    fclose(fp);
    printf("----------------------------\n"
           "student.txt存檔\n");

}
