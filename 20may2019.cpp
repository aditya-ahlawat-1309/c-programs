#include <stdio.h>
#include<iostream>
using namespace std;
int main ()
{
	int a=0,b=0,c=0,d,e,f,g,h;
	char cy;
	do
	{
		printf("press 1for bca");
		printf("press 2 for bsc");
		printf("press 3 for btech");
		scanf("%d",&d);
		switch(d)
	 {
	 	case 1:
	 	a++;
	 	break;
	 	case 2:
	 	b++;
	 	break;
	 	case 3:
	 	c++;
	 	break;
	 }
	printf("press y for new student");
	scanf("%c",&cy);
	
	}
while (cy=='y');

e=a+b+c;
if (a>5)
{a=e;
printf("total bca waiting list = %d",e);
}
if(a<=5)
printf ("total bca admissions = %d",a);
system("cls");
if (b>8)
{
	b=f;
	printf("total bsc waiting list=%d",f);
	
}
if (b<=8)
{printf("total bsc admissions = %d",b);

}
if (c>10)
{
	c=g;
	printf("total btech waiting list=%d",g);
	
}
if (c<=10)
{
printf("total btech admissions = %d",c);}
printf("total admissions = %d",e);
h=e+f+g;
printf("total waiting list = %d",h);
(a>b?(a>c?printf("%d bca greatest",a):printf("%d btech greatest",c)):(b>c?printf("%d bsc greatest",b):printf("%d btech greatest",c)));
(e>f?(e>g?printf("%d bca greatest waiting",e):printf("btech waiting greatest",g)):(f>g?printf("%d bsc greatest waiting",f):printf("%d btech greatest waiting",g)));
}
