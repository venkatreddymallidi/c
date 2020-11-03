#include<stdio.h>
#include<conio.h>
void swap(int ,int );  //function declaration
main()
{
int x,y;
clrscr();
printf("enter the values of x,y:\n");
scanf("%d%d",&x,&y);
swap(x,y);
printf("after swapping in main:\n%d\n%d\n",x,y);//here 4,5 because passing value
getch();
}
void swap(int x,int y)
{
int z;
z=x;
x=y;
y=z;
printf("after swapping in function:\n%d\n%d\n",x,y);
}
