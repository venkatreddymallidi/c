#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
main()
{
int x,y;
clrscr();
printf("enter x,y values:\n");
scanf("%d%d",&x,&y);
swap(&x,&y);//here we send address to swapfunc
printf("after swapping in main:%d\t%d\n",x,y);  //x=5,y=4 because scope address is global
getch();
}
void swap(int *x,int *y)
{
int z;
z=*x;
*x=*y;
*y=z;
printf("after swapping in function:%d\t%d\n",x,y);  //here x,y is address
//to print values use pointers we get 5 4
}