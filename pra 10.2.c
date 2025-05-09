#include<stdio.h>
union bookdetail{
 int accessionnumber;
 char booktitle[50];
 char authorname[50];
 float price;
 int flag;
}bdl;
int main(){
printf("Please Enter the Bookdetails\n");
printf("Enter the Accession Number:\n");
scanf("%d",&bdl.accessionnumber);
printf("Enter the Book Title:\n");
scanf("%s",bdl.booktitle);
printf("Enter the Author Name:\n");
scanf("%s",bdl.authorname);
printf("Enter the Price:\n");
scanf("%f",&bdl.price);
printf("Enter the Flag:\n");
scanf("%d",&bdl.flag);
printf("-----Book Details-----\n");
printf("Accession Number: %d\n",bdl.accessionnumber);
printf("Book Title: %s\n",bdl.booktitle);
printf("Author Name: %s\n",bdl.authorname);
printf("Price: %f\n",bdl.price);
printf("Flag: %d\n",bdl.flag);
if(bdl.flag==1)
 printf("Book Issued");
else if(bdl.flag==0)
 printf("Book Not Issued");
else
 printf("Invalid Flag");
printf("\n\n\n\t\t23CS080_Rabadiya Kevin");
}
