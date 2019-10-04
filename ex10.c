#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c;
    printf("請選擇花色:\n");
    scanf("%c",&c);
    printf("花色%c",c);
    //char a1; a1=006;
    //char a2; a2=003;
    //char a3; a3=004;
    //char a4; a4=005;
    switch(c)
    {
        case 'a1':
            printf("你選的是%c",6);
            break;
        case 'a2':
            printf("你選的是%c",3);
            break;
        case 'a3':
            print("你選的是%c",4);
            break;
        default:
            printf("你選的是%c",5);
    }
}
