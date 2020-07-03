#include <iostream>
using namespace std;
class personnel
{
	string a,n;
	static double s;
	static double r;
	public:
		void in ()
		{
			cout <<"enter name and rank";
			getline (cin,a);
			getline (cin,n);
			
		}
		void out ()
		{
			cout <<a<<endl<<n<<endl;
		}
		
};
double personnel :: r =10;
if (a==lt)
{
double personnel :: s= 1000;}
else if (a==captain)
{double personnnel  ::s=10000;
}
else if (a==major)
{double personnel :: s=1000000;
}
int main ()
{
	personnel p[2];
	for (int i=0;i=1;i++)
	{
		p[i].in();
		p[i].out();
		
	}
	int choice , p[10];
	cout <<"enter your choice";
	cin >>choice;
	for (i=0;i=1,i++)
	{
		if (choice == p[i])
		{
			cout <<p[i];
			break;
		}
	}
	
	
}
