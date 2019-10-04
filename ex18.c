#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={0};
    printf("%d\n", a[1]);

    int b[5]={99,100,76,66,80};
    for (int i=0;i<5;i++){
        printf("i=%d\t",i);
        printf("%3d\n",b[i]);
    }
    printf("\n");

    int n;
    int f=0; //尚未找到
    printf("輸入一個字來搜尋:\n");
    scanf("%d",&n);
    for (int i=0;i<5;i++){
        if (b[i]==n){
            f=1;
            printf("在第%d項找到\n",i);}

        }
    if(f==0){
        printf("找不到\n");
    }
}
