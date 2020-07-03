#include<stdio.h>
/*int main ()
{
	int a,num,rem,i,b,sum=0,s=0;
	scanf("%d",&num);
	for (i=num*num;i>0;i=i/10)
	{
		rem=i%10;
		sum=sum+rem;
	}
for (a=sum;a>0;a=a/10)
{
	rem=a%10;
	sum=sum+rem;
	
}
for(b=num;b>0;b=num/10)
{
	rem=num%10;
	s=s+rem;
	
}
if(s==sum)
{printf("neon");
}
else
{
	printf("not");
}
}*/
/*int main()
{
	int a,b,c,s=0;
	for (a=1;a<=5;a++)
	{
		for (b=a;b>=0;b=b/10)
		{
			c=b%10;
			s=s+(c*c*c);
			
		}
if (b==s)
{
printf("%d\n",a);
s=0;
}
	}
}*/
int main ()
{
	int n,i,count=0;
    for (i=1;i<=500;i++)
	{
		if (n%i==0)
		count++;
	}
	if (count==2)
	printf("prime\n");

}
