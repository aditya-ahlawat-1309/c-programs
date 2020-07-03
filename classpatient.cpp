#include <iostream>
using namespace std;
class patient
{
string n,d;
int b;
public:
	void in()
	{
		getline (cin,n);
		getline(cin,d);
		cin>>b;
		
	}
	void out ()
	{
		cout <<n<<endl<<d<<endl<<b;
	}
	int bd()
	{
		return b;
	}
};
int main()
{
	
	patient p[5];
	for ( int i =0;i=4; i ++)
	{p[i].in();
	}
	int i,choice;
	
cout << "enter your choice =";
	cin>>choice;
	for (i=0;i<=1;i++)
	{
		if (choice == p[i])
		{
			cout<<p[i].patient();
			break;
		}
	p[i].out();
	}
}
