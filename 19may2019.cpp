#include<stdio.h>
/*int main()
{
	int num,i,sum=0;
	scanf("%d",&num);
	for (i=1;i<num;i++)
	{
		if (num%i==0)
		{
			sum=sum+i;
			}
}
	if ( sum ==num)
	printf("perfect number");		

}*/
int main()
{
	int num,i,sum=0;
	scanf("%d",&num);
	i=1;
	while(i<num)
	{
		if (num%i==0)
		sum=sum+i;
		i++;
		
	}
	if (sum==num)
	printf("perfect number");
}
