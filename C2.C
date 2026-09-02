#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,h,s;
printf("enter 3 values");
scanf("%d %d %d",&a,&b,&b);
if(a>b)
{
 h=a; s=b;
}
else
{
 h=b; s=a;
};
if(c>h)
 h=c;
else
if(c<s)
  s=c;
if(h==s)
 printf("all values are the same.\n");
else
 printf("highest value: %d lowest value: %d\n",h,s);
getch();
}