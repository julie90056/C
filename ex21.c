#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={0};
    for (int i=0;i<5;i++){
        printf("請輸入第%d項成績:\n", i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("你輸入的成績如下:\n");
    for (int i=0;i<5;i++){
            printf("第%d項成績:%d\n",i,a[i]);
    }
    //計算總分
    int sum=0;
    for (int i=0;i<5;i++)
    {
        sum+=a[i];
    }
    printf("總成績為%d\n",sum);

    int MAX=0;
    int MIN=100;
    for (int i=0;i<5;i++){
            if (a[i]>MAX){
                MAX=a[i];
             }

    }printf("最高分為%d\n",MAX);
     for (int i=0;i<5;i++){
            if (a[i]<MIN){
                MIN=a[i];

            }

     }printf("最低分為%d\n",MIN);
    //做完迴圈之後才把結果print出來


    //使用迴圈逐項比較,把最大值移到最後一項
    int z;
    for (int i=0;i<4;i++){
            printf("第%d與第%d項做比較\n",i,i+1);
            if (a[i]>a[i+1]){
                z=a[i];
                a[i]=a[i+1];
                a[i+1]=z;
                printf("最大值為%d\n",z);
             }

    }


}
