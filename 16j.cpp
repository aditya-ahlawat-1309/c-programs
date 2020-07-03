#include <iostream>
using namespace std;
class english 
{
	protected :
	int a;
	string n;
	public :
		void in ()
		{
		cout << "enter the name and marks in english quiz"<< endl;
			getline (cin,n);
			cin >> a;
		}
};
class science: public english
{

	int b;
	string n;
	public:
		void in ()
		{
			cout<< " enter the name and marks of the student in science quiz"<< endl;
			getline (cin,n);
			cin >> b;
		}
};
class maths : public english
{

	int c;
	string n;
	public :
		void in ()
		{
				cout<< " enter the name and marks of the student in maths quiz"<< endl;
			getline ( cin,n);
			cin >> c;
		}
  	
};
class student :public science , public maths
{
	int i ;
	public:
		void setdata()
		{
			for (int i = 0 ; i<=2; i++)
			{
			
				science ::in();
				maths::in();
			}
		}
	
};
int main ()
{
	student s;
	s.setdata();
}
