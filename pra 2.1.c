#include<stdio.h>
void main()
{
 int tp=80000;
 int tm=tp*0.52;
 int tw=tp-tm;
 int tl=tp*0.48;
 int tlm=tp*0.35;
 int tlw=tl-tlm;
 int tilm=tm-tlm;
 int tilw=tw-tlw;
    printf("Sr.No.   Get Outcome                     Value");
    printf("\n\n 1.      Total Population                %d",tp);
    printf("\n 2.      Number of Literate(Men+Woman)   %d",tl);
    printf("\n 3.      Number of Men                   %d",tm);
    printf("\n 4.      Number of Women                 %d",tw);
    printf("\n 5.      Number of Literate Men          %d",tlm);
    printf("\n 6.      Number of illiterate Men        %d",tilm);
    printf("\n 7.      Number of Literate Women        %d",tlw);
    printf("\n 8.      Number of Illiterate Women      %d",tilw);
    printf("\n\n\n\t\t23cs080 Rabadiya Kevin");
}
