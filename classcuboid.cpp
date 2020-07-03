#include <iostream>
using namespace std;
class cuboid ;
class square;
class cube;
class sphere
{
	float r;
	public :
		void in ()
		{ cout <<"enter radius";
		cin>>r;
		}
		friend void displaydata (cuboid, square,cube,sphere);
		
};
class cube
{float a;
public:
	void in ()
	{cout<<"enter the side of the cube";
	cin >>a;
	
	}
	friend void displaydata (cuboid,square,cube,sphere);
	
};
class square
{float b;
public:
	void in ()
	{cout <<"enter the edge of the square";
	cin >>b;
	}
	friend void displaydata (cuboid , square, cube ,sphere );
	
};
class cuboid 
{
	float l,d,h;
	public:
	void in ()
	{cout << "enter l,d,h";
	cin>>l>>d>>h;
	}
	friend void displaydata(cuboid c , square s, cube c1, sphere s1)
	{
		cout << "volume = "<<c.l*c.d*c.h;
		cout<< " area = "<<s.b*s.b;
		cout <<"volume = "<<c1.a*c1.a;
		cout<<"volume = "<<s1.r*s1.r*s1.r*4/3*3.14;
	}
};
int  main ()
{
	cuboid d;
	square d1;
	cube d2;
	sphere d3;
	d.in();
	d1.in();
	d2.in();
	d3.in();
	displaydata (d,d1,d2,d3);
}
