/*read and print 2d array*/

#include <stdio.h>
int main()
{
    int i,n,a[10][10],j,m;
    printf("enter the row and coloumn size of the array:\n");
    scanf("%d%d",&n,&m);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the array elements are\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
