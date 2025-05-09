#include<stdio.h>
struct employee{
 char name[50];
 int age;
 float salary;
 char locality[75];
}emp;
int main(){
printf("Enter the Name and Age of Employee:");
gets(emp.name);
scanf("%d",&emp.age);
printf("Enter Salary of The Employee:\n");
scanf("%f",&emp.salary);
printf("Enter Address:\n");
scanf("%s",emp.locality);
printf("-----Employee Details-----\n");
printf("Name: %s\n",emp.name);
printf("Age: %d\n",emp.age);
printf("Address: %s\n",emp.locality);
printf("Salary: %f\n",emp.salary);
printf("\n\n\n\t\t23CS080_Rabadiya Kevin");
}
