#include<stdio.h>  
 int main()    
{    
    int n,sum=0,m,lucky=0,p;    
    printf("Enter a number:");    
    scanf("%d",&n);    
    while(n>0)    
    {    
        m=n%10;    
        sum=sum+m;    
        n=n/10;    
    } 
    printf("sum=%d\n",sum);
    while(sum>0)
    {
        p=sum%10;
        lucky+=p;
        sum=sum/10;
    }
    printf("simplified form:%d\n",lucky);
    
    return 0;  
} 
