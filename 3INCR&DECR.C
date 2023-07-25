#include<stdio.h>
#include<conio.h>
void main()
{
int a=3;
clrscr();
a=a++; /* postfix incr */
printf("a=%d\n",a);
a=3;
a=++a; /* prefix incr */
printf("a=%d",a);
getch();
}