#include<stdio.h>
#include<conio.h>
main()
{
int m1[5][5],m2[5][5],m3[5][5],i,j,k,r1,c1,r2,c2;
clrscr();
printf("enter rows and columns of matrix:\n");
scanf("%d%d",&r1,&c1);
printf("enter rows and columns of matrix:\n");
scanf("%d%d",&r2,&c2);
if(r1!=c2||c1!=r2)
{
printf("matrix multiplication not possible");
}
else
{
printf("enter elements into matrix 1:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&m1[i][j]);
}
}
printf("enter elements into matrix 2:\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&m2[i][j]);
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
m3[i][j]=0;
for(k=0;k<c1;k++)
{
m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
}
}
}
printf("resultant matrix:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",m3[i][j]);
}
printf("\n");
}
getch();
}
}