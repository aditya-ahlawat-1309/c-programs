#include<stdio.h>
/*int main()
{
	FILE *fp;
	char ch;
	fp=fopen("abc.c","r");
	if (fp==0)
	{
		puts ("invalid");
		exit(1);
		
	}
	while(1)
	{
		ch=fgetc(fp);
		if (ch==EOF)
		break;
		else
		printf("%c",ch);
	}
	fclose(fp);
}*/

struct student 
{
	char n[10];
	int r,m;
	
};
int main ()
{
	struct student s;
	puts ("enter name , roll no,marks");
	gets (s.n);
	scanf("%d%%d",&s.r,&s.m);
	printf("name=%s\nroll no=%d\nmarks=%d",s.n,s.r,s.m);
}
