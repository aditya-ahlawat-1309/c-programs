#include <iostream>
using namespace std;
class english 
{
	
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
class science : public english
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
class maths : public science
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
int main ()
{
	maths m[5];
	for (int i = 0 ; i = 5 ; i++)
	{
		m[i].english::in();
		m[i].science::in();
		m[i].maths::in();
	}
}
