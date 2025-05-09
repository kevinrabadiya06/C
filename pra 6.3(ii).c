#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter number of rows: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        j=0;
        while(j<n-i)
        {
            printf(" ");
            j++;
        }
        k=1;
        while(k<=i)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
        i++;
    }
    printf("\n\n\n\t\t23cs080 Rabadiya Kevin");
}
