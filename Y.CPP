#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr[5],i;
printf("enter 5 values\n");
for(i=0;i<5;i++)
 scanf("%d",&arr[i]);
for(i=0;i<5;i++)
 printf("%d",arr[i]);
getch();
}