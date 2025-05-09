#include<stdio.h>
void main()
{
 int a[25],p=0,n=0,o=0,e=0,i=0;
 printf("Enter the 25 Numbers:\n");
 for(i=0;i<=24;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<=24;i++)
 {
 if(a[i]%2==0)
 e++;
 else
 o++;
 if(a[i]>0)
 p++;
 else
 n++;
 }
 printf("\n Number of positive number: %d",p);
 printf("\n Number of negative number: %d",n);
 printf("\n Number of even number: %d",e);
 printf("\n Number of negative number: %d",o);
 printf("\n\n\n\t\t23CS080_Rabadiya Kevin");
}
