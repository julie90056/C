#include <stdio.h>
#include <stdlib.h>

int main()
{

    srand(1);
    int n;
    n=rand();
    printf("亂數:%d\n",n);
    n=rand()%4;
    printf("亂數:%d\n",n);

    n=rand();
    printf("亂數:%d\n",n);

    n=rand();
    printf("亂數:%d\n",n);
}
