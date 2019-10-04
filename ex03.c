#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cm; cm=152.0;
    int kg; kg=45.0;
    float m; m=cm/100.0;
    int bmi; bmi=kg/ (m*m);

    printf("bmi=%d\n", bmi);
    printf("m=%f\n", m);
}

