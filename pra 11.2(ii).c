char *copy (char*,char *);
int main(){
char *str;
char source[] = "Kindness";
char target[10];
str=copy(target,source);
printf("%s\n",str);
printf("\n\n\n\t\t23CS080_Rabadiya Kevin");
return 0;
}
char *copy(char *t,char *s){
char * r;
r = t;
while(*s!='\0'){
*t=*s;
t++;
s++;
}
*t='\0';
return(r);
}