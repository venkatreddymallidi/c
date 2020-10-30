#include<stdio.h>
#include<conio.h>
struct student
{
int rno;
char name[20];
float fees;
};
main()
{
struct student s;
clrscr();
printf("enter rno,name,fees\n");
scanf("%d%s%f",&s.rno,s.name,&s.fees);
printf("rno=%d\nname=%s\nfees=%f",s.rno,s.name,s.fees);
getch();
}