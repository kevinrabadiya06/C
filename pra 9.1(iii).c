#include<stdio.h>
int main()
{
int a;
a=prime_check();
if(a==0)
 printf("Number is Neither Prime nor Composite");
else if(a==1)
 printf("The number is Prime");
else if(a==2)
{
 printf("The number is Non-Prime");
}
 printf("\n\n\n\t\t23CS080_Rabadiya Kevin");
}
int prime_check()
{
int n,i;
 printf("Enter the number n: ");
 scanf("%d",&n);
 if(n==1)
 return 0;
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
 return 2;
 else
 return 1;
 }
}
