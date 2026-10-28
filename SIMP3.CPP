#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1;
long int f=1;
printf("enter a value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
f=f*i;
printf("%d!=%ld\n",n,f);
getch();
}