#include<stdio.h>
#include<conio.h>
main()
{
int a[3][3],b[3][3],sum[3][3],i,j,r,c;
clrscr();
printf("enter row and elements you want:\n");
scanf("%d%d",&r,&c);
printf("enter elements in 'a' matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter elemets in 'b' matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sum[i][j]=a[i][j]+b[i][j];
}
}
printf("resultant matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",sum[i][j]);
}
printf("\n");
}
getch();
}