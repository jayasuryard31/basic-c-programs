/*read and print 2d array*/

#include <stdio.h>
int main()
{
    int i,n,a[10][10][10],j,m,o,k;
    printf("enter the row and coloumn size of the array:\n");
    scanf("%d%d%d",&n,&m,&o);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            for(k=0;k<o;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    printf("the array elements are\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            for(k=0;k<o;k++)
            {
                printf("%d\t",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
