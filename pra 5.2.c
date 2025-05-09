#include<stdio.h>
void main()
{
    int x1,x2,x3,y1,y2,y3,s1,s2;
    printf("enter value of x1,x2,x3,y1,y2,y3\n");
    scanf("%d,%d,%d,%d,%d,%d",&x1,&x2,&x3,&y1,&y2,&y3);
    s1=(y2-y1)/(x2-x1);
    s2=(y3-y2)/(x3-x2);
    if(s1==s2)
    {
        printf("this ponits are linear points");
    }
    else
    {
        printf("this points are non-linear points");
    }
    printf("\n\n\n\t\t23cs080 Rabadiya Kevin");
}
