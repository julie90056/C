#include <stdio.h>
#include <stdlib.h>
int main()
{
    int e;
    int m;
    char c;
    do{
        do {
            printf("請輸入英文成績");
            scanf(" %d",&e);
            }while (0>e||e>100);
        do
            {
            printf("請輸入數學成績");
            scanf(" %d",&m);
            }while (0>m||m>100);


        printf("總分:%d\n",e+m);
        printf("是否結束(y/n)?");
        scanf(" %c",&c);
        }while(c!='y');
}

