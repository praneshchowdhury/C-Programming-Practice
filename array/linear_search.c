#include<stdio.h>
int main()
{
    int i,num[5]={10,15,20,25,30};
   int  find=5;
   int found=0;

   for(i=0;i<=4;i++)
   {
    if(find==num[i])
    {found++;
    break;
    }
    
}
if(found==1)
{
    printf("Found this Number");
}
else {
    printf("Not found");
}

}