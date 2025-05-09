#include<stdio.h>
#include<string.h>
int main()
{
 int a1[10][10],a2[10][10],d2[10][10];
 int i,j,k,r1,c1,r2,c2,sum;
 printf("Enter no. of rows of 1st matrix:");
 scanf("%d",&r1);
 printf("Enter no. of columns of 1st matrix:");
 scanf("%d",&c1);
 printf("Enter no. of rows of 2nd matrix:");
 scanf("%d",&r2);
 printf("Enter no. of columns of 2nd matrix:");
 scanf("%d",&c2);
 for(i=0;i<r1;i++)
 {
 for(j=0;j<c1;j++)
 {
 scanf("%d",&a1[i][j]);
 }
 }
 printf("\nMatrix 1 is :\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",a1[i][j]);
}
printf("\n");
}
for(i=0;i<r2;i++)
 {
 for(j=0;j<c2;j++)
 {
 scanf("%d",&a2[i][j]);
 }
 }
 printf("\nMatrix 2 is :\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",a2[i][j]);
}
printf("\n");
}
for(i=0;i<r1;i++)
 {
 for(j=0;j<c2;j++)
 {
 sum=0;
 for(k=0;k<c2;k++)
 {
 sum+=(a1[i][k])*(a2[k][j]);
 d2[i][j]=sum;
 }
 }
 }
 printf("\nAnswer matrix is :\n");
 for(i=0;i<r1;i++)
 {
 for(j=0;j<c2;j++)
 {
 printf("%d\t",d2[i][j]);
 }
 printf("\n");
 }
printf("\n\n\n23CS080_Rabadiya Kevin");
}
