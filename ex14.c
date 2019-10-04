#include <stdio.h>
#include <stdlib.h>
int main()
{
    int score;
    int count=0;

    int max=0;
    int total=0;

    do{
        printf("請輸入成績:(輸入-1結束)\n");
        scanf("%d",&score);

        if (score!=-1)
        {
            count+=1;
            total=total+score;
        }
        if (score>max)
        {
            max=score;
        }


    }while(score!=-1);

    float f_count=count;
    printf("平均值%f\n",total/f_count);
    printf("最高分%d\n",max);
    printf("總分:%d\n",total);
    printf("程式結束\n");
}


