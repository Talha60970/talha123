
#include<stdio.h>
#include<conio.h>
void main() {
 int n,t,q,r,rev=0;
 clrscr();
 printf("enter a number:");
 scanf("%d",&n);
 t=n;
 while(n)
 {
 q= int(n/10);
 r= n%10;
 rev= rev*10+r;
 n=q;
 }
 if(rev==t)
   printf("%d is a palindrome no\n",t);
 else
  printf("%d is not a palindrome no\n",t);
 getch();
 }