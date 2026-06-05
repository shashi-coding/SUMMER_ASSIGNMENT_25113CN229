#include <stdio.h>
#include<math.h>
int main() {

    int n,num,num1,sum=0,r,c=0;
    printf("enter the number:");
    scanf("%d",&n);
    num=n;
    while (n>0)
    {
        n=n/10;
        c=c+1;
    }
    num1=num;
    while (num>0)
    {   
        r=num%10;
        sum=sum+pow(r,c);
        num=num/10;
    }
    if (sum==num1)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }
    
     return 0; 
}
    