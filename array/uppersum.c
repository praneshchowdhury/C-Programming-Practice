#include<stdio.h>
int main()
{
    int i,j,col,row,sum=0,matrix[5][5];

    printf("Enter Matrix Order [Row] [Column]: ");
    scanf("%d %d",&row,&col);

    for(i=0;i<row;i++)
    {   printf("Row %d Value\n",i);
        for(j=0;j<col;j++)
        {
            printf("Matrix index [%d][%d]===>",i,j);
            scanf("%d",&matrix[i][j]);
            
        }
        printf("\n");
    }
    printf("Inputed Matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",matrix[i][j]);
            if(i<j){
                sum=sum + matrix[i][j];
            }
            
        }
        printf("\n");
    
    }

    printf("Sum of uppper triangles elements : %d",sum);
}