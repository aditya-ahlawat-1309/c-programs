#include<stdio.h>
/*int main ()
{
int a;
printf ("print a number for a day of the week");
scanf("%d",&a);
switch(a)
{
	case 1:
		printf ("today is monday");
         break;
     case 2:
	printf("today is tuesday");
	break;
	case 4:
		printf("today is thursday");
		break;
		case 5:
			printf("today is friday");
			break;
			case 6:
				printf  ("today is saturday");
				break;
				case 7:
					printf("today is sunday");
					break;
					default:
						printf("invalid");
						break;
}
}*/
/*int main ()
{
	int a,b,c;
	printf ("press 1 for sum \n");
	printf("press 2 for product");
	scanf("%d",&c);
	switch (c)
	{
		case 1:
			printf ("enter two values");
			scanf("%d%d",&a,&b);
			printf ("sum = %d",a+b);
			break;
			case 2:
				printf ("enter two values");
				scanf ("%d%d",&a,&b);
				printf ("product = %d",a*b);
				break;
				default:
					printf("invalid");
					break;
	}
	
}*/
/*int main()
{
	float a;
	char b;
	printf("press a for area of the circle");
	printf ("press v for volume of the sphere");
	scanf ("%c", &b);
	switch (b)
	{
		case 'a' :
			printf ("enter radius");
			scanf("%f",&a);
			printf ("area = %f",3.14*a*a);
			break;
			case'v':
				printf ("enter radius");
				scanf ("%f",&a);
				printf ("volume = %f",4/3*3.14*a*a*a);
				break;
				default:
					printf("invalid");
					
	}
}*/
/*int main ()
{
	int a,b;
	printf ("press 1 for english\n");
	printf ("press 2 for hindi");
	scanf ("%d",&a);
	switch (a)
	{
		case 1 :
			printf ("press 1 for current account\n");
			printf ("press 2 for saving account");
			scanf("%d",&a);
			switch (b)
			{
				case 1 :
					printf ("your current account");
					break;
					case 2 :
						printf ("your saving account");
					}
						break;
						
			
			
	case 2 :
		printf ("press 1 for current account\n");
		printf ("press 2 for saving account");
		scanf ("%d",&a);
		switch (b)
	{
		case 1 :
			printf("your current account");
			break;
			case 2 :
				printf ("your saving account");

	}
	break;
	default:
		printf ("invalid");
		break;
	}
}*/

int main ()
{
	float a ;
	printf ("enter a value  ");
	scanf ("%f",&a);
	if (a>=100)
	{
		a=a*1.2;
		
		printf("%f",a);}
		
		else
		{
			a=a*.75;
		printf ("%f",a);}
	}
		
	
