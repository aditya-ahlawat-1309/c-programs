#include <iostream>
using namespace std;
class english 
{
	protected:
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
class science : public english
{
protected :
	int b;
	
	public:
		void in ()
		{
			cout<< " enter the name and marks of the student in science quiz"<< endl;
			fflush(stdin);
			getline (cin,n);
			cin >> b;
		}
};
class maths : public science
{

	int c , sum ;
	
	public :
		void in ()
		{
				cout<< " enter the name and marks of the student in maths quiz"<< endl;
			fflush(stdin);
			getline ( cin,n);
			cin >> c;
		    sum = a+b+c;
		}
  	
};
int main ()
{
	maths m[2];
	for (int i = 0 ; i <= 1 ; i++)
	{
		m[i].english::in();
		m[i].science::in();
		m[i].maths::in();
	}
}
