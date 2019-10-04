#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void bubblesort(int a[], int len)
{
    int i, j, z;
    for (i=0;i<len-1;++i){
            for(j=0;j<len-1-i;++j)

        if  (a[j]>a[j+1]){

            z= a[j];
            a[j]=a[j+1];
            a[j+1]=z;

        }

    }
    return 0; //定義完函數之後返回
}
int main()
{
        int i;
        int a[]={100,95,90,93,98,97};
        bubblesort(a,6);
        for (i=0;i<6;++i){
        printf("%d\t",a[i]);

        }
}

