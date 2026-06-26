//program : Check palindrome numbers from user given range
#include<stdio.h>
int main(){
    int first_num,last_num,digit,reverse,copy_num,sum=0,count=0;
    
    printf("Enter 1st number of range : ");
    scanf("%d",&first_num);
    printf("Enter last number of range : ");
    scanf("%d",&last_num);

    if(last_num<first_num){
        int temp = first_num;
        first_num = last_num;
        last_num = temp;
    }
    
    for(int i =first_num;i<=last_num;i++){
        int num = i;
        sum =0;
        while(num!=0)
        {
            digit = num%10;
            sum = sum*10 + digit;
            num = num/10;
        }

    
        if(i==sum){
            count++;
            printf("%d, ",i);
        }
        
    }

    if(count==0)
        {
            printf("No palindrome found in this range.");
        }
   else{
            printf("Palindrome Numbers from %d to %d range : ",first_num,last_num);
            printf("\nTotal palindrome in this range : %d\n",count);
   } 

    
}