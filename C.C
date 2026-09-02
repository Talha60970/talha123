#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("enter the two values");
scanf("%d %d",&a,&b);
if(a>b)
 printf("%d>%d\n",a,b);
else if(a<b)
 printf("%d<%d\n",a,b);
else
 printf("%d=%d",a,b);
getch();
}