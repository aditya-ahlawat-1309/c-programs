#include <iostream>
using namespace std;
class employee
{
	char n[3],a[3];
	int s;
	public:
		void in ()
		{
			cout <<"enter name , emp id , salary";
			cin.getline(n,3);
			cin.getline(a,3);
			cin>>s;
		}
		void out()
		{
			cout <<"name = "<<n<<endl;
			cout<<"address="<<a<<endl;
			cout <<"salary = "<<s<<endl;
		}
};
