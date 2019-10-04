#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
void searchStudent();
void deleteStudent();

#define size 2

STUDENT st[size];
int count=0;
int i=0;

int main()
{
    printf("1. 新增學生資料\n");
    for (int i=0;i<size;i++){
            inputStudent(&st[i]);
    }
    for (int i=0;i<size;i++){
            printStudent(&st[i]);
    }
    writeStudent(&st);
    searchStudent();
    printf("請確認要刪除的資料\n");

    deleteStudent();
    printStudent(&st);


}

void writeStudent(STUDENT*tmp)
{
    //檔案指標
    FILE *fp;
    fp=fopen("student.txt","w");
    for(int i=0;i<size;i++){

        fprintf(fp,"%s %d %d \n", st[i].name,st[i].eng,st[i].math);
    }


    fclose(fp);
    printf("----------------------------\n"
           "student.txt存檔\n");

}

void deleteStudent()
{
    int index=1;
    st[index].name[0]=0;

}


void searchStudent()
{

    char n[10];
    printf("查詢學生資料:");

    scanf("%s",n);

    for (i;i<size;i++){
        int x=strcmp(n,st[i].name);

        if (x==0){
                printf("%s %d %d\n",st[i].name,st[i].eng,st[i].math);
                return 0; //代表找到學生資料後程式結束
            }



        }
        printf("查無此人資料\n");

}





void printStudent(STUDENT*ptmp)
{
    printf("%s\t%d\t%d\n",ptmp->name,ptmp->eng,ptmp->math);
}


void inputStudent(STUDENT*ptmp)
{


    printf("input student:");
    scanf("%s %d %d",ptmp->name,&ptmp->eng,&ptmp->math);
    printf("\n");

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





void inputStudentfromfile(STUDENT*tmp)
{
    //檔案指標
    FILE *fp;
    fp=fopen("student.txt","r");
    while(fscanf(fp,"%s %d %d \n", st[count].name,st[count].eng,st[count].math)){
        printStudent(&st[count]);
        count++;
        if(count==size){
            printf("陣列已滿");
            break;
        }
    }

    fclose(fp);


}


