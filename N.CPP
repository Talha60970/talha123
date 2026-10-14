
#include<stdio.h>
#include<conio.h>
void main() {
char str[100];
int i,count=0;
 clrscr();
 printf("enter your string");
 gets(str);
 i=0;
while(str[i]!='\0')
{
   switch(str[i])
   {
     case'a':
     case'A':
     case'e':
     case'E':
     case'i':
     case'I':
     case'o':
     case'O':
     case'u':
     case'U':count++;
 }
 i++;
}
 printf("%s contains %d vowels",str,count);
 getch();
 }