#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,b;
clrscr();
b=a++ + a++ + a++; /* postfix incr */
printf("a=%d, b=%d\n",a,b);
a=1;
b=++a + ++a + ++a; /* prefix incr */
printf("a=%d, b=%d",a,b);
getch();
}