#include <stdio.h>
#include <stdlib.h>
// 設計一個計算總分的函式
int sum(int a[],int len) //宣告陣列變數
{
    int sum=0;
    for (int i=0;i<len; i++)
    {
        sum+=a[i];
    }
    return sum;
}

int main()//主程式, 程式起點
{
    int len;
    printf("有機個成績要輸入:");
    scanf("%d",&len);
    int a[len];
    for (int i=0;i<len;i++){
        printf("請輸入第%d個成績:", i);
        scanf("%d", &a[i]);
    }
    int s=sum(a,len);
    printf("總分=%d\n",s);
    printf("平均=%5.2f\n",(float)s/len);

}
