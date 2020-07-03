#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n;
printf("enter size");
scanf("%d",&n);
p=(int*)malloc(n*sizeof (int));
for (i=0;i<n;i++)
{
	scanf ("%d",p+i);
	printf("%d\n",*(p+i));
	
	}
	free(p);	
}


