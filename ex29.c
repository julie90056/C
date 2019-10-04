#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int n;
int m;
    srand(time(NULL));

    n=rand()%11;

    do{
        printf("玩家猜入數字1~10:\n");

        scanf("%d",&m);
        printf("猜入數字%d",m);

        if (m==n){
                printf("猜對了\n");
                printf("亂數=%d\n",n);

                }
        else {
            printf("猜錯\n");
            if (m>n){
                printf("數值太大\n");
            }
            else{
                printf("數值太小\n");
                }
        }
    }while (m!=n); //當條件成立, 回到do 在執行一次


}




