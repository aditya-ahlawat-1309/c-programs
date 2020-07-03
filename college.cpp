#include <iostream>
using namespace std;
class college
{
	string a,n,b;
	public :
		void in()
		{
			fflush(stdin);
			getline (cin,a);
			fflush(stdin);
			getline(cin,n);
			fflush(stdin);
			getline (cin , b);
			
		}
friend class college1;

};
class college1
{
	college c;
	public :
		void in ()
		{
			cout << "name of the college = "<<endl;
			c.in();
			cout<<c.n;
		}
		void in1()
		{
			cout << "name of the teacher = "<<endl;
			c.in();
			cout<<c.a;
		}
		void in2()
		{
			cout<<"name of the student = "<<endl;
			c.in();
			cout<<c.b;
		}
		
};
int main ()
{
	college1 c;
	c.in();
	c.in1();
	c.in2();
	
}
