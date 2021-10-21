/*swaping two intergers with using third variable*/

#include <stdio.h>
int main()
{
    int a,b,t;
    printf("enter the values of a and b\n");
    scanf("%d%d",&a,&b);
    printf("before swaping\na=%d\nb=%d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("after swaping\na=%d\nb=%d\n",a,b);
    
    return 0;
}
