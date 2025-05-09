#include<stdio.h>
#include<math.h>
void main()
{
   float a,b,c;
   float discriminant=b*b-4*a*c;
   float realPart,imaginaryPart;
   printf("Enter the coefficients of the quadratic equation (a, b, c): ");
   scanf("%1f %lf %1f",&a,&b,&c);
   switch (discriminant > 0)
   {
    case 1:
      {
         double root1=(-b + sqrt(discriminant))/(2*a);
         double root2=(-b - sqrt(discriminant)) /(2*a);
         printf("Roots are real and different: \n");
         printf("Root 1= %.2lf\n", root1);
         printf("Root 2= %.2lf\n", root2);
      }
    break;
    case 0:
      {
         double root=-b/(2*a);
         printf("Roots are real and same:\n");
         printf("Root= %.2lf\n", root);
      }
    break;
    default:
      {
          realPart= -b/(2*a);
          imaginaryPart=sqrt(-discriminant)/(2*a);
          printf("Roots are complex and different: \n");
          printf("Root 1= %.2lf+%.2lfi\n",realPart,imaginaryPart);
          printf("Root 2= %.2lf-%.2lfi\n", realPart, imaginaryPart);
      }

          printf("\n\n\n\t\t23cs080 Rabadiya Kevin");
}
