#include <iostream>
#include<stdio.h>
using namespace std;
class shape
{float r,a,l,b,h;
void volume ()
{
	cin>>r;
}
void area()
{ 
	cin>>a;
}
void volume (float l,float b,float h)
{
	fflush(stdin);
	cin>>l>>b>>h;
}
public :
	void out()
	{   float l,b,h;
		volume ( l,  b,  h);
		cinl>>b>>h;
		cout <<l*b*h;
	}
};
int main()
{shape s;
s.out();
}
