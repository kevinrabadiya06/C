#include<stdio.h>
struct bookdetail{
 char booktitle[50];
 char authorname[50];
 float amount;
}bdl;
int main(){
printf("Please Enter the Bookdetails\n");
printf("Enter the Book Title:\n");
gets(bdl.booktitle);
printf("Enter the Author Name:\n");
gets(bdl.authorname);
printf("Enter the Amount:\n");
scanf("%f",&bdl.amount);
printf("-----Book Details-----\n");
printf("Book Title: %s\n",bdl.booktitle);
printf("Author Name: %s\n",bdl.authorname);
printf("Amount: %f\n",bdl.amount);
printf("\n\n\n\t\t23CS080_Rabadiya Kevin");
}
