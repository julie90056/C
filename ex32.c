#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[10];
    char s2[10];
    int count=0;
    do{
    printf("請輸入一組帳號:\n");
    scanf(" %s",s1);

    printf("請輸入一組密碼:\n");
    scanf(" %s",s2);

    //printf("帳號:%s, 密碼:%s\n",s1,s2);

    char name[]={"tom"};
    char pass[]={"123"};

    int x=strcmp(s1,name);
    int y=strcmp(s2, pass);
    if (x==0 && y==0){
        printf("welcome!!\n");
        break;
    }

    else {
        count+=1;
        if (count>2){
            printf("連續輸入錯誤3次,請至櫃檯辦理\n");
            break;
        }
        else{
        printf("帳號或id 錯誤, 還有%d次機會\n",(3-count));
        }


        }
    }while(count<3);


}
