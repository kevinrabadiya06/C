#include<stdio.h>
void main()
{
    int i=0,j,k=0,m=0,n;
    printf("enter number of rows");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(m=n-i;m>0;m--)
        {
            printf(" ");
        }
        for(k=i;k>=0;k--)
        {
            printf("%c",k+65);
        }
        for(j=0;j<i;j++)
        {
            printf("%c",j+66);
        }
          printf("\n");
    }
    printf("\n\n\n\t\t23cs080 rabadiya kevin");
}
