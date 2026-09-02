 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 clrscr();
 int n,q,r;
 printf("enter your no");
 scanf("%d",&n);
 q=n/7;
 r=n-q*7;
 if(r==0)
  printf("it is divisible by 7");
 else
  printf("not divisible by7");
getch();
 }