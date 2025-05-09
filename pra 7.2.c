#include<stdio.h>
main()
{
 int i,j=0,a[3],b[4],c[7],temp;
 printf("Enter the first Array elements:");
 for(i=0;i<3;i++)
 {
 scanf("%d",&a[i]);
 c[j]=a[i];
 j++;
 }
 printf("Enter the second Array elements:");
 for(i=0;i<4;i++)
 {
 scanf("%d",&b[i]);
 c[j]=b[i];
 j++;
 }
 printf("Merged Array elements: ");
 for(i=0;i<7;i++)
 {
 printf("%d ",c[i]);
 }
 for(i=0;i<7;i++)
 {
 for(int k=1+i;k<7;k++)
 {
 if(c[i]>c[k])
 {

 temp=c[i];
 c[i]=c[k];
 c[k]=temp;
 }
 }
 }
 printf("\nSort of array: ");
 for(i=0;i<7;i++)
 {
 printf("%d ",c[i]);
 }
printf("\n\n\n\t\t23CS080_Rabadiya Kevin");
}
