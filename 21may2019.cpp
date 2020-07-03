#include <stdio.h>
int main ()
{
	int a[5],i,choice,b;
	for (i=0;i<=4;i++)
	{
		scanf ("%d",&a[i]);
		}
		printf("enter your choice");
		scanf("%d",&choice);
	do
	{
		
	
		for (i=0;i<=4;i++)
		{
			if (choice==a[i])
			{
				printf("%d\n%d\n",a[i],i);
			
		
		
				break;
			}
		}
	}
		while (a[i]=a[5]);
		if (a[i]=choice)
		{
			b=i;
			printf ("%d",b);
		}
		
}


