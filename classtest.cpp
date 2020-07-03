#include <iostream>
using namespace std;
class test
{float l,b,h,r,d,c,a;
friend class vc;
friend class vs;
friend class ar;
friend class ps;
};
class vc{
	public:
		void in ()
		{
			cout << "enter l,b,h";
			test t;
			cin>>t.l>>t.b>>t.h;
			cout <<"volume of the cuboid = "<<t.l*t.b*t.h;
		}
};
class vs{
	public :
		void in ()
		{
			cout<< "enter r";
			test t;
			cin >>t.r;
			cout<<"volume of the sphere="<<t.r*t.r*t.r*4/3*3.14;
			
		}
};
class ar 
{
    public:
	void in ()
	{cout<<"enter b,c";
	test t;
	cin >>t.b>>t.c;
	cout <<"area of the rectangle="<<t.b<<t.c;
		}	
};
class ps{
	public :
		void in ()
		{
			cout << "enter a";
			test t;
			cin>>t.a;
			cout <<"perimeter of the square=";4*t.a;
		}
};
int main ()
{
	vc d;
	vs e;
	ar f;
	
	ps g;
	d.in();
	e.in();
	f.in();
	g.in();
}

