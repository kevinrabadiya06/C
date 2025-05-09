#include<stdio.h>
#include<math.h>
#define PI 3.14
void main()
{
    float L;
    float G;
    scanf("%f,%f",&L,&G);
    float X=L/G;
    float T=2*PI*sqrt(X);
    printf("%f, %f, %f",L,G,T);
    printf("\n\n\n\t\t23cs080 Rabadiya Kevin");
}
