#include<iostream>
using namespace std;

class shape
{
	public:
		float volume(float a)
		{
			return a*a*a;
		}
		float volume(float h,float r)
		{
			return 3.14*h*r*r;
		}
		float volume(float l,float b,float r_h)
		{
			return l*b*r_h;
		}
};
int main()
{
	shape obj;
	float a,h,r,l,b,r_h;
	cout<<"Enter the side of the cube \n";
	cin>>a;
	cout<<"\n Enter the height of cylinder \n";
	cin>>h;
	cout<<"\n Enter the radius of cylinder \n";
	cin>>r;
	cout<<"\n Enter the lenght of cuboid \n";
	cin>>l;
	cout<<"\n Enter the bredth of cuboid \n";
	cin>>b;
	cout<<"\n Enter the height of cuboid \n";
	cin>>r_h;
	cout<<"\n Volume of cube is : "<<obj.volume(a);
	cout<<"\n Volume of cylinder is : "<<obj.volume(h,r);
	cout<<"\n Volume of Cuboid is : "<<obj.volume(l,b,r_h);
	return 0;
}