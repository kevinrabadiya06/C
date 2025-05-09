#include<stdio.h>
void prime_check()
{
int n,i;
 printf("Enter the number n: ");
 scanf("%d",&n);
 if(n==1)
 {
 printf("Number is Neither Prime nor Composite");
 }
 else
 {
 for(i=2;i<=n-1;i++)
 {
 if(n%i==0)
 break;
 else
 continue;
 }
 if(i!=n)
 {
 printf("The number is Non-Prime");
 }
 else
 {
 printf("The number is Prime");
 }
 }
 }
 main()
 {
 prime_check();
printf("\n\n\n\t\t23CS080_Rabadiya Kevin");
 }
