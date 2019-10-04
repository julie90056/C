#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{

    int year; //攝氏

    printf("請輸入年份:");
    scanf("%d",&year);
    printf("年份%d\n",year);


    int day; day=year*365;
    int hours; hours=day*24;
    int minutes; minutes=hours*60;
    unsigned long long int seconds; seconds=minutes*60;
    unsigned long long int miniseconds; miniseconds=seconds*1000;


    printf("等於%d天\n",day);
    printf("等於%d小時\n",hours);
    printf("等於%llu秒\n",seconds);
    printf("等於%llu毫秒\n",miniseconds);

}

