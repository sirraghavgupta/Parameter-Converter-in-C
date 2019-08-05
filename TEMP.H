#include <stdio.h>
#include <conio.h>

int temp_convertor_in()
{
int i;
do
{
// clrscr();
printf("\nenter ur input temperature unit:-\n");
printf("\n1.Celcius\n");
printf("\n2.Kelvin\n");
printf("\n3.Fahrenheit\n");
printf("\n4.Rankine\n");
printf("\n5.Previous Menu\n");
scanf("%d",&i);
}while(i>5);
return i;
}

int temp_convertor_out()
{
int o;
do
{
// clrscr();
printf("\nenter ur output temperature unit:-\n");
printf("\n1.Celcius\n");
printf("\n2.Kelvin\n");
printf("\n3.Fahrenheit\n");
printf("\n4.Rankine\n");
printf("\n5.Previous Menu\n");
scanf("%d",&o);
}while(o>5);
return o;
}

void temp_convertor_pro(int in,int out)
{float i,o;
if((in==1)&&(out==1))
		{
		 printf("\ninput in celsius:-");
		 scanf("%f",&i);
		 o=i;
		 printf("output in celsius:-%f",o);
		}
if((in==1)&&(out==2))
		{
		 printf("\ninput in celsius:-");
		 scanf("%f",&i);
		 o=i+273.15;
		 printf("output in kelvin:-%f",o);
		}
if((in==1)&&(out==3))
		{
		 printf("\ninput in celsius:-");
		 scanf("%f",&i);
		 o=((9*i)/5)+32;
		 printf("output in fahrenheit:-%f",o);
		}
if((in==1)&&(out==4))
		{
		 printf("\ninput in celsius:-");
		 scanf("%f",&i);
		 o=(i+273.15)*(9/5);
		 printf("output in rankine:-%f",o);
		}
if((in==2)&&(out==1))
		{
		 printf("\ninput in kelvin:-");
		 scanf("%f",&i);
		 o=i-273.15;
		 printf("output in celsius:-%f",o);
		}
if((in==2)&&(out==2))
		{
		 printf("\ninput in kelvin:-");
		 scanf("%f",&i);
		 o=i;
		 printf("output in kelvin:-%f",o);
		}
if((in==2)&&(out==3))
		{
		 printf("\ninput in kelvin:-");
		 scanf("%f",&i);
		 o=((9*i)/5)+523.67;
		 printf("output in fahrenheit:-%f",o);
		}
if((in==2)&&(out==4))
		{
		 printf("\ninput in kelvin:-");
		 scanf("%f",&i);
		 o=i*1.8;
		 printf("output in rankine:-%f",o);
		}
if((in==3)&&(out==1))
		{
		 printf("\ninput in fahrenheit:-");
		 scanf("%f",&i);
		 o=((i-32)*5)/9;
		 printf("output in celsius:-%f",o);
		}
if((in==3)&&(out==2))
		{
		 printf("\ninput in fahrenheit:-");
		 scanf("%f",&i);
		 o=((i-523.67)*5)/9;
		 printf("output in kelvin:-%f",o);
		}
if((in==3)&&(out==3))
		{
		 printf("\ninput in fahrenheit:-");
		 scanf("%f",&i);
		 o=i;
		 printf("output in fahrenheit:-%f",o);
		}
if((in==3)&&(out==4))
		{
		 printf("\ninput in fahrenheit:-");
		 scanf("%f",&i);
		 o=i-32+273.15*1.8;
		 printf("output in rankine:-%f",o);
		}
if((in==4)&&(out==1))
		{
		 printf("\ninput in rankine:-");
		 scanf("%f",&i);
		 o=i*(5/9)-273.15;
		 printf("output in celsius:-%f",o);
		}
if((in==4)&&(out==2))
		{
		 printf("\ninput in rankine:-");
		 scanf("%f",&i);
		 o=i*(5/9);
		 printf("output in kelvin:-%f",o);
		}
if((in==4)&&(out==3))
		{
		 printf("\ninput in rankine:-");
		 scanf("%f",&i);
		 o=i-459.67;
		 printf("output in fahrenheit:-%f",o);
		}
if((in==4)&&(out==4))
		{
		 printf("\ninput in rankine:-");
		 scanf("%f",&i);
		 o=i;
		 printf("output in rankine:-%f",o);
		}

getch();
}
