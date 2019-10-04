#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={99,100,75,68,80};
    for (int i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    int n;
    printf("輸入一個數字來搜尋:\n");
    scanf("%d",&n);

    int f=0;
    for (int i=0;i<5;i++) {
            if (a[i]==n){
                f=1; //TRUE
                printf("在第%d項找到了\n",i+1);
            }
    }
    if (f==0)
    {
        printf("找不到\n");
    }
}
