#include <stdio.h>
#include <stdlib.h>
int main()
{

    float c; //攝氏

    printf("請輸入攝氏溫度:");
    scanf("%f",&c);
    printf("攝氏溫度%f",c);
    float f; f=c*9/5+32; //華氏
    printf("華氏溫度等於%f",f);
}


