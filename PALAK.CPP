#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int r,f,s,cc,n,sc,dc,rc;
char c;
Boolean b,d;
printf("enter 1 if u want to see the plan details");
printf("enter 2 if you want to fill the deatls");
scanf("%d",&n);
if(n==2)
{
printf("enter the plan name");
scanf("%c",&c);
printf("enter the monthly rental");
scanf("%d",&r);
printf("enter 0 if you want free calls else enter 0");
scanf("%d",&f);
d=f;
printf(d=0?"yes":"no");
printf("enter 0 if you want free sms else enter 1");
scanf("%d",&s);
b=s;
printf(b=0?"yes":"no");
printf("enter the call charges");
scanf("%d",&cc);
printf("enter the sms charges");
scanf("%d",&sc);
printf("enter the data charges");
scanf("%d",&dc);
printf("enter the roaming charges");
scanf("%d",&rc);
}
else
{
printf("invalid choice")_;
}
getch();
}
