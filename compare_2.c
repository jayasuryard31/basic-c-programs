/*greater in two numbers using conditional operator*/

#include<stdio.h>
int main()
{
    int a,b,big;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    (a>b)?(big=a):(big=b);
    printf("then %d is big\n",big);
  
    return 0;
}
