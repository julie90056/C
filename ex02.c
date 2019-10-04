#include <stdio.h>
#include <stdlib.h>
int main()
{
    int e; e=100;
    int m; m=99;

    int sum; sum=e+m;
    float avg=sum/2.0; //運算過程是整數, 則計算結果為整數; 若有小數點2.0 則出來就是有小數點的值

    printf("e=%d\n", e);
    printf("m=%d\n", m);
    printf("sum=%d\n",sum);
    printf("avg=%f\n",avg);
}
