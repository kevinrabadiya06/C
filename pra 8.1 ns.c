#include<stdio.h>
void main()
{
 int x,count=0,count1=0,count2=0;
 char str1[100];
 char str2[100];
 char c[100];
 printf("Enter first string:");
 scanf("%s",&str1);
 printf("Enter second string:");
 scanf("%s",&str2);
 printf("Enter number:");
 scanf("%d",&x);
 switch(x)
 {
 case 1:
 for(int i=0;str1[i]!='\0';i++){
 count1++;
 }
 for(int i=0;str2[i]!='\0';i++){
 count2++;
 }
 printf("The length of first string is %d.\n",count1);
 printf("The length of second string is %d.\n",count2);
 break;
 case 2:
 for(int i=0;str1[i]!='\0';i++){
 count1++;
 }
 printf("The first reverse string is ");
 for(int i=count1-1;i>=0;i--){
 printf("%c",str1[i]);
 }
 printf("\n");
 for(int i=0;str2[i]!='\0';i++){
 count2++;
 }
 printf("The second reverse string is ");
 for(int i=count2-1;i>=0;i--){
 printf("%c",str2[i]);
 }
 printf("\n");
 break;
 case 3:
 for(int i=0;str1[i]!='\0';i++){
 count1++;
 }
 for(int i=0;str2[i]!='\0';i++){
 count2++;
 }
 for(int i=0;str1[i]!='\0' && str2[i]!='\0';i++){
 if(str1[i]==str2[i])
 {
 count++;
 }
 }
 if(count==count1){
 printf("Both string are same.\n");
 }
 else{
 printf("Both string are not same.\n");
 }
 break;
 case 4:
 for(int i=0;str1[i]!='\0';i++){
 count1++;
 }
 for(int i=0;i<count1;i++){
 c[i]=str1[i];
 }
 printf("The copied string is %s",c);
 break;
 case 5:
 for(int i=0;str1[i]!='\0';i++){
 count1++;
 }
 for(int i=0;str2[i]!='\0';i++){
 count2++;
 }
 for(int i=0;i<count1;i++){
 c[i]=str1[i];
 }
 for(int i=0;i<count2;i++){
 c[count1+i]=str2[i];
 }
 count=count1+count2;
 printf("Concatenate string is ");
 for(int i=0;i<count;i++){
 printf("%c",c[i]);
 }
 break;
 default:
 printf("Enter value from 1 to 5 only.");
 }
 printf("\n\n\n\t\t23CS080_Rabadiya Kevin");
}
