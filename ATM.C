#include<stdio.h>
#include<conio.h>
void main()
{
int i=0;
int x,amt;
int balamt;
int bal=30000;
char pin1[10]={'b','s','a','i','t','m'};
char pin[10] ;
clrscr();
printf("\t\t\tWelcome To Ritchie ATM\n");
printf("\t\t\t-----------------------\n\n");
printf("Enter your pin......");
while((pin[i]=getch())!='\r')
{
putch('*');
i++;
}
pin[i]='\0';
x=strcmp(pin,pin1);
if(x==0)
{
printf("\n\nlogin succesfully\n\n");
printf("Enter your withdrawal amount = ");
scanf("%d",&amt);
if(amt<15000)
{
balamt=bal-amt;
printf("Total balabne= 30000\n ");
printf("balance left= %d\n",balamt);
printf("\t## happy to help you ##");
}
else
{
printf("**your withdrawal amount is large**transaction cancel** ");
}
}
else
{
printf("\n\nincorrect pin\n");
printf("** try again **");
}
getch();
}





