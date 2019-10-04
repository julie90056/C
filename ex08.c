#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c;
    do{
            //變數c屬於do-while 的區域變數
        printf("請輸入A~E的成績等級:");
        scanf("%c%c",&c);
        switch(c) //swith 只能用在整數
        {
            case 'A':
            case 'a':
                printf("優等\n");
                break;
            case 'B':
            case 'b':
                printf("甲等\n");
                break;
            case 'C':
            case 'c':
                printf("乙等\n");
                break;
            case 'D':
            case 'd':
                printf("丙等\n");
                break;
            case 'E':
            case 'e':
                printf("丁等\n");
                break;
            default:
                printf("錯誤等級\n");
            }

    }while((c>='A'&&c<+'E')||(c>='a'&&c<='e'));
}

