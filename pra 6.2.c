#include<stdio.h>
void main()
{
    int m=21,p,c;
    while(1)
    {
        printf("\n number of match sticks left=%d\n",m);
        printf("pick matches between 1 to 4\n");
        scanf("%d",&p);
        if(p<4 &&p>1)
            continue;
        m=m-p;
        printf("\nnumber of matches left %d",m);
        c=5-p;
        printf("\nout of which computer picked up%d",c);
        m=m-c;
        printf("\nnumber of matches left %d",m);
        if(m==1)
        {
           printf("number of matches left %d",m);
           printf("\nyou lost the game");
           break;
        }
    }
    printf("\n\n\n\t\t23cs080 Rabadoya Kevin");
}
