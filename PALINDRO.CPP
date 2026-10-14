
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main() {
 char s1[50],s2[50];
 clrscr();
 printf("enter a string");
 gets(s1);
 strcpy(s2,s1);
 strrev(s2);
 if (strcmp(s1,s2)==0)
    printf("%s is a palindrome string",s1);
 else
  printf("%s is not a palindrome string",s1);
 getch();
 }