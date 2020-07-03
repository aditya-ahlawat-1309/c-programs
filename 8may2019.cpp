#include <iostream>
using namespace std;
class salary1;
class salary
{
	int a , ns;
	public:
		void in()
		{
			cout <<"enter basic salary";
			cin>>a;
		}
	friend void out (salary s1)
	{
		cout << "ns="<<s1.a*1/10 + s1.a*2/10 + s1.a*3/10 - s1.a*4/100 - s1.a*12/100;
		}	
};
int main ()
{
    int ns;
	if (ns > 20000)
	{
		ns = ns*1/10+ns;
		
	}
	else
	{ns=ns;
	}
	salary s[5];
	for (int i=0;i=4;i++)
	{
		s[i].in();
		out(s[i]);
	}
}
