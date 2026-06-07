#include<stdio.h>
int main()
{
    int i,j,n,mat[5][5],r,c;
    printf("Enter Matrix Order : ");
    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("index [%d] [%d] : " ,i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {   printf("\t");
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
}