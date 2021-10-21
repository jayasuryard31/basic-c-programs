/*swaping two intergers without using third variable*/

#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the values of a and b\n");
    scanf("%d%d",&a,&b);
    printf("before swaping\na=%d\nb=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping\na=%d\nb=%d\n",a,b);
    
    return 0;
}
