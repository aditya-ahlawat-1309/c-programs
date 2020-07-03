#include<iostream>
using namespace std;
class bank
{
	int a;
	public:
		class scu
		{
			int c;
			public :
				void in ()
				{
					cout << " press 3 for withdrawl "<<endl<<"press 4 for current deposit "<<endl;
					cin >>c;
					switch (c)
					{
						case 3 :
							cout << "your withdrawl is a success "<<endl;
						    break;
						case 4:
							
							cout <<" your deposit is a success "<< endl;
							break;
					}
				}
		}ob;

void in1()
{
	cout << "press 1 for savings "<< endl;
	cout << "press 2 for current "<< endl;
	cin >>a;
	switch (a)
	{
		case 1 : 
		cout << " your savings are 1000000"<<endl;
		ob.in();
		break;
		case 2 :
			cout << " your current account is 1093269387"<<endl;
			ob.in();
			
	}
  }
};
int main ()
{ 
 bank b;
 b.in1();
}
