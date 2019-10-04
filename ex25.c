#include <stdio.h>
#include <stdlib.h>

//輸入x與y來劃位
int main()
{
        int a[10][10]={0};
    for (int y=0;y<10;y++){
        for (int x=0;x<10;x++){
        printf(" %d ",a[y][x]);
        }
    printf("\n");
    }


    int no=0;
    int b[10][10]={0};

    do
    {

        printf("第%d組選位:\n",no);
        int px;
        int py;
        printf("請輸入x:");
        scanf("%d",&px);
        printf("請輸入y:");
        scanf("%d",&py);
        printf("\n");


        if (b[py][px]==1){
            printf("重複劃位, 請重新選位\n");
            no=no-1;
        }
        else{
                b[py][px]=1;
                for (int py=0;py<10;py++){
                    for (int px=0;px<10;px++){
                    printf(" %d ",b[py][px]);

            }printf("\n");
        }


        }
        no=no+1;

    }while(no<3);


}


