#include<stdio.h>
int binary(int num)
{
    int mod,rem;
    mod=num%2;
    rem=num/2;
    if(num/2==0)
    {
        return mod;
    }
    else
    {
        return binary(rem);
    }
}
int main()
{
    int number;
    int a;
    printf("enter number you want convert in binary\n");
    scanf("%d",&number);
    a=binary(number);
    printf("%d",a);
}
