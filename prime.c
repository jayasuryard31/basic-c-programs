#include<stdio.h>
void main()
{
    int i,n,flag=0;
    scanf("%d",&n);
    
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        flag=1;
    }
    
    if(n==1)
    printf("1 is neither a prime number nor a composite number");
    
    if(flag==0)
    printf("%d is a prime number\n",n);
    else
    printf("%d is not a prime number\n",n);
    
    
    
    
}
