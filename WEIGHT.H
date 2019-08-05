int weight_convertor_out()
{
int o;
do
{
clrscr();
printf("\nenter a valid output weight unit:-\n");
printf("\n1.Kilograms\n");
printf("\n2.Grams\n");
printf("\n3.Quintals\n");
printf("\n4.Tonnes\n");
printf("\n5.Pound\n");
printf("\n6.Ounce\n");
printf("\n7.Previous Menu\n");
scanf("%d",&o);
}while(o>7);
return o;
}

////////************************************************************/////////







void weight_convertor_pro(int ip,int op)
{
 float i,o;

	if((ip==1)&&(op==1))
		{
		 printf("\ninput in kilograms:-");
		 scanf("%f",&i);
		 o=i;
		 printf("output in kilograms:-%f",o);
		}
	if((ip==1)&&(op==2))
		{
		 printf("\ninput in kilograms:-");
		 scanf("%f",&i);
		 o=i*1000;
		 printf("output in grams:-%f",o);
		}

	if((ip==1)&&(op==3))
		{
		 printf("\ninput in kilograms:-");
		 scanf("%f",&i);
		 o=i/100;
		 printf("output in quintals:-%f",o);
		}
	if((ip==1)&&(op==4))
		{
		 printf("\ninput in kilograms:-");
		 scanf("%f",&i);
		 o=i/1000;
		 printf("output in tonnes:-%f",o);
		}
	if((ip==1)&&(op==5))
		{
		 printf("\ninput in kilograms:-");
		 scanf("%f",&i);
		 o=i*2.2;
		 printf("output in pounds:-%f",o);
		}
	if((ip==1)&&(op==6))
		{
		 printf("\ninput in kilograms:-");
		 scanf("%f",&i);
		 o=i*35.27;
		 printf("output in ounces:-%f",o);
		}
	if((ip==2)&&(op==1))
		{
		 printf("\ninput in grams:-");
		 scanf("%f",&i);
		 o=i/1000;
		 printf("output in kilograms:-%f",o);
		}
	if((ip==2)&&(op==2))
		{
		 printf("\ninput in grams:-");
		 scanf("%f",&i);
		 o=i;
		 printf("output in grams:-%f",o);
		}
	if((ip==2)&&(op==3))
		{
		 printf("\ninput in grams:-");
		 scanf("%f",&i);
		 o=i/100000;
		 printf("output in quintals:-%f",o);
		}
	if((ip==2)&&(op==4))
		{
		 printf("\ninput in grams:-");
		 scanf("%f",&i);
		 o=i/1000000;
		 printf("output in tonnes:-%f",o);
		}
	if((ip==2)&&(op==5))
		{
		 printf("\ninput in grams:-");
		 scanf("%f",&i);
		 o=i/453.6;
		 printf("output in pounds:-%f",o);
		}
	if((ip==2)&&(op==6))
		{
		 printf("\ninput in grams:-");
		 scanf("%f",&i);
		 o=i/28.34;
		 printf("output in ounces:-%f",o);
		}
	if((ip==3)&&(op==1))
		{
		 printf("\ninput in quintals:-");
		 scanf("%f",&i);
		 o=i*100;
		 printf("output in kilograms:-%f",o);
		}
	if((ip==3)&&(op==2))
		{
		 printf("\ninput in quintals:-");
		 scanf("%f",&i);
		 o=i*100000;
		 printf("output in grams:-%f",o);
		}
	if((ip==3)&&(op==3))
		{
		 printf("\ninput in quintals:-");
		 scanf("%f",&i);
		 o=i;
		 printf("output in quintals:-%f",o);
		}
	if((ip==3)&&(op==4))
		{
		 printf("\ninput in quintals:-");
		 scanf("%f",&i);
		 o=i/10;
		 printf("output in tonnes:-%f",o);
		}
	if((ip==3)&&(op==5))
		{
		 printf("\ninput in quintals:-");
		 scanf("%f",&i);
		 o=i*220.5;
		 printf("output in pounds:-%f",o);
		}
	if((ip==3)&&(op==6))
		{
		 printf("\ninput in quintals:-");
		 scanf("%f",&i);
		 o=i*3527.4;
		 printf("output in ounces:-%f",o);
		}
	if((ip==4)&&(op==1))
		{
		 printf("\ninput in tonnes:-");
		 scanf("%f",&i);
		 o=i*1000;
		 printf("output in kilograms:-%f",o);
		}
	if((ip==4)&&(op==2))
		{
		 printf("\nout of range");
		}
	if((ip==4)&&(op==3))
		{
		 printf("\ninput in tonnes:-");
		 scanf("%f",&i);
		 o=i*10;
		 printf("output in quintals:-%f",o);
		}
	if((ip==4)&&(op==4))
		{
		 printf("\ninput in tonnes:-");
		 scanf("%f",&i);
		 o=i;
		 printf("output in tonnes:-%f",o);
		}
	if((ip==4)&&(op==5))
		{
		 printf("\ninput in tonnes:-");
		 scanf("%f",&i);
		 o=i*2200.5;
		 printf("output in pounds:-%f",o);
		}
	if((ip==4)&&(op==6))
		{
		 printf("\ninput in tonnes:-");
		 scanf("%f",&i);
		 o=i*35274;
		 printf("output in ounces:-%f",o);
		}
	if((ip==5)&&(op==1))
		{
		 printf("\ninput in pounds:-");
		 scanf("%f",&i);
		 o=i/2.2;
		 printf("output in kilograms:-%f",o);
		}
	if((ip==5)&&(op==2))
		{
		 printf("\ninput in pounds:-");
		 scanf("%f",&i);
		 o=i*453.6;
		 printf("output in grams:-%f",o);
		}
	if((ip==5)&&(op==3))
		{
		 printf("\ninput in pounds:-");
		 scanf("%f",&i);
		 o=i/220.46;
		 printf("output in quintals:-%f",o);
		}
	if((ip==5)&&(op==4))
		{
		 printf("\ninput in pounds:-");
		 scanf("%f",&i);
		 o=i/2204.6;
		 printf("output in tonnes:-%f",o);
		}
	if((ip==5)&&(op==5))
		{
		 printf("\ninput in pounds:-");
		 scanf("%f",&i);
		 o=i;
		 printf("output in pounds:-%f",o);
		}
	if((ip==5)&&(op==6))
		{
		 printf("\ninput in pounds:-");
		 scanf("%f",&i);
		 o=i*16;
		 printf("output in ounces:-%f",o);
		}
	if((ip==6)&&(op==1))
		{
		 printf("\ninput in ounces:-");
		 scanf("%f",&i);
		 o=i/35.27;
		 printf("output in kilograms:-%f",o);
		}
	if((ip==6)&&(op==2))
		{
		 printf("\ninput in ounces:-");
		 scanf("%f",&i);
		 o=i*28.34;
		 printf("output in grams:-%f",o);
		}
	if((ip==6)&&(op==3))
		{
		 printf("\ninput in ounces:-");
		 scanf("%f",&i);
		 o=i/3527.3;
		 printf("output in quintals:-%f",o);
		}
	if((ip==6)&&(op==4))
		{
		 printf("\ninput in ounces:-");
		 scanf("%f",&i);
		 o=i/35274;
		 printf("output in tonnes:-%f",o);
		}
	if((ip==6)&&(op==5))
		{
		 printf("\ninput in ounces:-");
		 scanf("%f",&i);
		 o=i/16;
		 printf("output in pounds:-%f",o);
		}
	if((ip==6)&&(op==6))
		{
		 printf("\ninput in ounces:-");
		 scanf("%f",&i);
		 o=i;
		 printf("output in ounces:-%f",o);
		}
	getch();
}

////////************************************************************/////////

int weight_convertor_in()
{
int i;
do
{
clrscr();
printf("\nenter ur input weight unit:-\n");
printf("\n1.Kilograms\n");
printf("\n2.Grams\n");
printf("\n3.Quintals\n");
printf("\n4.Tonnes\n");
printf("\n5.Pound\n");
printf("\n6.Ounce\n");
printf("\n7.Previous Menu\n");
scanf("%d",&i);
}while(i>7);
return i;
}
