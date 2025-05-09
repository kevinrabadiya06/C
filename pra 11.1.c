#include <stdio.h>
void categorizeMarks(int *marks, int size, int *distinction, int *firstClass, int *pass,
int *fail) {
 for (int i = 0; i < size; ++i) {
 if (marks[i] >= 70) {
 (*distinction)++;
 } else if (marks[i] >= 60) {
 (*firstClass)++;
 } else if (marks[i] >= 40) {
 (*pass)++;
 } else {
 (*fail)++;
 }
 }
}
int main() {
 int marks[10];
 int distinction = 0, firstClass = 0, pass = 0, fail = 0;
 printf("Enter marks of 10 students for CE143 Computer Concepts and Programming:\n");
 for (int i = 0; i < 10; ++i) {
 scanf("%d", &marks[i]);
 }
 categorizeMarks(marks, 10, &distinction, &firstClass, &pass, &fail);
 printf("\nResults Summary:\n");
 printf("DISTINCTION: %d\n", distinction);
 printf("FIRST CLASS: %d\n", firstClass);
 printf("PASS: %d\n", pass);
 printf("FAIL: %d\n", fail);
 printf("\n\n\n\t\t23CS080_Rabadiya Kevin");
 return 0;
}

