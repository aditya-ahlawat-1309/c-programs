#include <iostream>
using namespace std;
void area ();
void area (int,int);
void area (float);
int main()
{
	float a,b,c;
	cin>>a>>b>>c;
	area ();
	area (a,b);
	area(c);
	
}
void area ()
{
	int a ;
	cin >>a;
	cout <<a*a<<endl;
}
void area (int a, int b)
{cout <<a*b<<endl;
}
void area (float c)
{
	cout<<4.13*c*c;
}
