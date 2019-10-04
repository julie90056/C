#include <stdio.h>
#include <stdlib.h>
struct Student{
    char name[20];
    int eng;
    int math;
};
typedef struct Student STUDENT;
void printStudent(STUDENT*ptmp);
void inputStudent(STUDENT*ptmp);
void writeStudent(STUDENT*tmp);

#define SIZE 3

int main()
{
    STUDENT st;
    inputStudent(&st);
    printStudent(&st);
    writeStudent(&st);
    return 0;
}

void printStudent(STUDENT*ptmp)
{
    printf("%s\t%d\t%d\t",ptmp->name,ptmp->eng,ptmp->math);
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
    printf("----------------------------"
           "student.txt存檔");

}


