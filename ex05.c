#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    int b;
    printf("a的地址為: %d\n", &a);
    printf("請輸入a:");
    scanf("%d", 2686732);//知道a的位置之後可以直接從a的地址取值//
    printf("a等於%d", a);

}

