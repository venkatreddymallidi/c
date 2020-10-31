#include<stdio.h>
#include<conio.h>
main()
{
int a[10];//array declaration
int i;
clrscr();
printf("enter elements into array:\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("elemets in the array are:\n");
for(i=0;i<10;i++)
{
printf("%d\t",a[i]);
}
getch();
}