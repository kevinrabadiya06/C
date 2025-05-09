#include<stdio.h>
#include<ctype.h>
void main()
{
    char c;
    printf("enter value of c\n");
    scanf("%c",&c);
    if(islower(c))
    {
        printf("c is lower case character");
    }
    else if(isupper(c))
    {printf("c is upper case character");
    }
    else if(isdigit(c))
    {
        printf("c is digit");
    }
    else if(isprint(c))
    {
        printf("c is printable");
    }
    else if(ispunct(c))
    {
        printf("c is puncuation mark");
    }
    else
    {
        printf("c is a white space");
    }
    printf("\n\n\n\t\t23cs080 rabadiya kevin");
}
