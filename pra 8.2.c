#include<stdio.h>
#include<string.h>
main(){
char a[5][15];
int n,i,j;
char s[15];
printf("Enter the Number of names you need:");
scanf("%d",&n);
for(i=0;i<n;i++){
 scanf("%s",&a[i]);
}
for(i=0;i<n;i++){
 for(j=i+1;j<n;j++){
 if(strcmp(a[i],a[j])>0){
strcpy(s,a[i]);
strcpy(a[i],a[j]);
strcpy(a[j],s);
}
 }
}
printf("Sorted Names:\n",a[i]);
for(i=0;i<n;i++){
 printf("%s\n",a[i]);
}
printf("\n\n\n\t\t23CS080_Rabadiya Kevin");
}
