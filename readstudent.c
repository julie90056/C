#include <stdio.h>
#include <stdlib.h>
struct Student{
    char name[20];
    int eng;
    int math;
};
typedef struct Student STUDENT;
void printStudent(STUDENT*ptmp);
void readStudent(STUDENT*tmp);



int main()
{
    STUDENT st;

    readStudent(&st);
    printStudent(&st);

    return 0;
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
    printf("----------------------------"
           "student.txt讀檔\n");

}



