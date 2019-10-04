#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    int b;
    int c;
    printf("請輸入a:\n");
    scanf("%d",&a);
    printf("請輸入b:\n");
    scanf("%d",&b);
    printf("請輸入c:\n");
    scanf("%d",&c);

    printf("%d,%d,%d",a,b,c);
    if (a>b&&a>c)
    {
        printf("最大值a=%d",a);
    }
    else if(b>a&& b>c)
    {
        printf("最大值b=%d",b);
    }
    else
    {
        printf("最大值c=%d",c);
    }

}
