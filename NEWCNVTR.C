
#include<stdio.h>
#include"newcon.h"
#include"weight.h"
#include"temp.h"
void main()
{
char ch,choice;int source,destination,input,in,out,output;
do
{
clrscr();
printf("\n\t\t\t   Welcome to Convertor\n\n\n");
printf("\nEenter ur choice:-\n");
printf("\n1.CURRENCY CONVERTOR\n");
printf("\n2.WEIGHT CONVERTOR\n");
printf("\n3.TEMPERATURE CONVERTOR\n");
printf("\n4.QUIT");
ch=getch();
switch(ch)
	{
	case '1':do
		 {
		 source=currency_convertor_in();
		 if(source==9)
			{
			 break;
			}
		 destination=currency_convertor_out();
		 if(destination==9)
			{
			 break;
			}
		 currency_convertor_pro(source,destination);
		 printf("\npress y to continue with currency convertor\n");
		 choice=getch();
		 }while(choice=='y'||choice=='Y');
		 break;

	case '2':do
		 {
		 input=weight_convertor_in();
		 if(input==7)
			{
			 break;
			}
		 output=weight_convertor_out();
		 if(output==7)
			{
			 break;
			}
		 weight_convertor_pro(input,output);
		 printf("\npress y to continue with weight convertor\n");
		 choice=getch();
		 }while(choice=='y'||choice=='Y');
		 break;

	case '3':do
		 {
		 in=temp_convertor_in();
		 if(in==5)
			{
			 break;
			}
		 out=temp_convertor_out();
		 if(out==5)
			{
			 break;
			}
		 temp_convertor_pro(in,out);
		 printf("\npress y to continue with temperature convertor\n");
		 choice=getch();
		 }while(choice=='y'||choice=='Y');
		 break;

	case '4': exit(0);

	}
//printf("\npress y to go to previous menu\n");
//ch=getch();

}while(1/*ch=='y'||ch=='Y'*/);
}