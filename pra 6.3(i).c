#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j%2);
        }
    printf("\n");
    }
    printf("\n\n\n\t\t23cs080 Rabadiya Kevin");
}
