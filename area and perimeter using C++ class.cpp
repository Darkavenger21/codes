#include<iostream>
using namespace std;

class rectangle
{
	public:
	int length,width;
	rectangle(int l, int w)
	{
		length=l;
		width=w;
	}
	void perimeter()
	{
		int r_per;
		r_per=2*(width+length);
		cout<<"\nthe perimeter of the rectangle is "<<r_per;
	}
	void area()
	{
		int r_ar;
		r_ar=length*width;
		cout<<"\nthe area of the rectangle is "<<r_ar;
	}
};
class square
{
	public:
	int side;
	square(int s)
	{
		side=s;
	}
	void perimeter()
	{
		int s_per;
		s_per=4*side;
		cout<<"\nthe perimeter of the square is "<<s_per;
	}
	void area()
	{
		int s_ar;
		s_ar=side*side;
		cout<<"\nthe area of the square is "<<s_ar;
	}
};
class circle
{
	public:
	int radius;
	circle(int r)
	{
		radius=r;
	}
	void perimeter()
	{
		int c_per;
		c_per=2*3.14*radius;
		cout<<"\nthe perimeter of the circle is "<<c_per;
	}
	void area()
	{
		int c_ar;
		c_ar=3.14*radius*radius;
		cout<<"\nthe area of the circle is "<<c_ar;
	}
};
int main()
{
	int a,b,x,y;
	cout<<"Enter the Length and width of rectangle ";
	cin>>a>>b;
	cout<<"Enter the side of square ";
	cin>>x;
	cout<<"Enter the radius od circle ";
	cin>>y;
	
	rectangle r(a,b);
	square s(x);
	circle c(y);
	
	r.area();
	r.perimeter();
	
	s.area();
	s.perimeter();
	
	c.area();
	c.perimeter();
	
	return 0;
}