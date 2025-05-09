#include<stdio.h>
float main()
{
 float BA;
 printf("Enter your Basic salary");
 scanf("%f",&BA);
 float DA=0.7*BA;
 float HRA=0.07*BA;
 float MA=0.02*BA;
 float TA=0.04*BA;
 float PF=0.12*BA;
 float AL=DA+HRA+MA+TA;
 float GS=BA+AL;
 printf("Enter your Basic Salary %f",BA);
 printf("\nDA of Basic Salary %f",DA);
 printf("\nMA of Basic Salary %f",MA);
 printf("\nTA of Basic Salary %f",TA);
 printf("\nPF of Basic Salary %f",PF);
 printf("\nGross Salary %f",GS);
 printf("\n\n\n\t\t23cs080 Rabadiya Kevin");
 return 0;
}
