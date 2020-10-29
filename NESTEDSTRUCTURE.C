#include<stdio.h>
#include<conio.h>
struct dob
{
int day;
int month;
int year;
};
struct student
{
int rno;
char name[33];
float fees;
struct dob d;
};
main()
{
struct student s;
clrscr();
printf("enter date of birth:\n");
scanf("%d%d%d",&s.d.day,&s.d.month,&s.d.year);
printf("enter student details:\n");
scanf("%d%s%f",&s.rno,s.name,&s.fees);
printf("student entire details:\n");
printf("day/month/year:%d/%d/%d\n",s.d.day,s.d.month,s.d.year);
printf("rno=%d,name=%s,fees=%f",s.rno,s.name,s.fees);
getch();
}