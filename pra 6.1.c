#include<stdio.h>
int main(){
int a,num,p=0,i,nu,result=0,b,n,r,c,sum=0;
printf("Enter a Choice");
printf("\n1-Prime number\n2-Perfect number\n3-Armstrong number\n");
scanf("%d",&a);
switch(a)
{
case 1:
printf("Enter a number:");
scanf("%d",&num);
for(i=1;i<=num;i++){
if(num%i==0){
p++;
}
}
if(p==2){
printf("Entered number is %d is a prime number",num);
}
else{
printf("Entered number is %d is not a prime number",num);
}
break;
case 2:
printf("Enter a number:");
scanf("%d",&nu);
for(b=1;b<nu;b++){
if(nu%b==0){
result= result + b;
}
}
if(result==nu){
printf("It is a Perfect number");
}
else{
printf("It is not a Perfect number");
}
break;
case 3:
printf("Enter a number:");
scanf("%d",&n);
c=n;
while(n>0){
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(c==sum){
printf("It is an Armstrong number");
}
else{
printf("Not an Armstrong number");
}
break;
}
printf("\n\n\n\t\t23CS080_Rabadiya Kevin");
return 0;
}
