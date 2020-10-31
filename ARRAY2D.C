#include<stdio.h>
#include<conio.h>
main()
{
int a[2][2],i,j;
clrscr();
printf("enter elements into array:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("the elements in the array are:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
getch();
}