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
struct student s[10];
int i,n;
clrscr();
printf("how many students you want\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("enter student details:\n");
scanf("%d%s%f",&s[i].rno,s[i].name,&s[i].fees);
}
printf("students details are:\n");
for(i=0;i<n;i++)
{
printf("rno=%d\nname=%s\nfees=%f",s[i].rno,s[i].name,s[i].fees);
}
getch();
}
