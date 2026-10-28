#include<stdio.h>
#include<conio.h>
int main()
{
 int n;
 clrscr();
 printf("enter a no:");
 scanf("%d",&n);
 if(n%7==0 && n%13==0)
  printf("it is divisible");
 else
  printf("not divisible");
 getch();
 }