#include <stdio.h>
void bill(int,int);
int main()
{int a,b;
printf("enter price and quantity");
scanf("%d%d",&a,&b);
bill(a,b);

}
void bill(int x, int y)
{
	printf( "bill = %d",x*y);
}

