#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10];
    printf("輸入名字:");
    scanf("%s",name); //陣列名稱即地址, 不須加&
    printf("welcome, %s",name);

}
