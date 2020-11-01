#include<stdio.h>
#include<conio.h>
#include<string.h>
 main()
{
char str1[15],str2[20],str3[10];
int len,res;
clrscr();
gets(str1);
strupr(str1);
printf("string 1 in upper case: %s\n",str1);
strlwr(str1);
printf("string 1 in lower case:%s\n",str1);
strcpy(str2,str1);
printf("string 1 is copied to string 2:%s\n",str2);
res=strcmp(str1,str2);
if(res==0)
{
printf("string 1 and 2 are same\n");
}
else
{
printf("string 1 and 2 are not same\n");
}
strrev(str2);
printf("reverse of string 2:%s\n",str2);
strcat(str1,str2);
printf("concatenation of string 1 and string 2:%s\n",str1);
len=strlen(str1);
printf("length of string1:%d",len);


getch();
}