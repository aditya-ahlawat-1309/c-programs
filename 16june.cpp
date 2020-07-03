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
			fflush(stdin);
			getline (cin,n);
			cin >> a;
		}
};
class science
{
protected :
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
class maths 
{
protected :
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
class student : public english , public science , public maths
{
	int i ;
	public:
		void setdata()
		{
			for (int i = 0 ; i<=2; i++)
			{
				english ::in();
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
