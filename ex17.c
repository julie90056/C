#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int n;
    srand(time(NULL));
    //srand 正常而言一份程式碼(專案)只能執行一次，如果它放在 for loop 裡，每次進行 rand 前就用 srand，會發現每次取出來的亂數是同一個數字。
    n=rand() % 4 + 1;
    printf("%d ", n);

    if (n==1)
        {
        printf("花色為%c\n",006);}
    else if (n!=1)
            {
        printf("亂數:%d\n",n);}

    int m;
    srand(time(NULL));
    m=rand() % 13+1;
    printf("%d ", m);

    if (m==1)
        {
        printf("亂數%d, 顯示為%c",m,65);}
    else if (m==11)
            {
        printf("亂數%d, 顯示為%c",m,74);}
    else
    {
        printf("亂數為%d",m);
    }

}

