#include<iostream>

using namespace std;

class time
{
	int h;
	int m;
	int s;
	int e_m;
	int e_s;
	public:
	void get_data()
	{
		cout<<"\n Enter Hours : ";
		cin>>h;
		cout<<"\n Enter Minutes : ";
		cin>>m;
		cout<<"\n Enter seconds : ";
		cin>>s;
	}
	void convert_m()
	{
		if(m>59)
		{
			e_m=m%60;
			h=h+m/60;
			m=e_m;
		}
	}
		void convert_s()
	{
		if(s>59)
		{
			e_s=s%60;
			m=m+s/60;
			s=e_s;
		}
	}
	void put_data()
	{
		cout<<"\n the Time is - ";
		cout<<h<<":"<<m<<":"<<s;
	}
	void sum(time t1, time t2)
	{
		h=t1.h + t2.h;
		m=t1.m + t2.m;
		s=t1.s + t2.s;
	}
};
int main()
{ 
	time t1,t2,t3;
	cout<<"\n Enter time 1 : ";
	t1.get_data();
	cout<<"\n Enter time 2 : ";
	t2.get_data();
	cout<<"\n time 1 is - ";
	t1.put_data();
	cout<<"\n time 2 is - ";
	t2.put_data();
	t3.sum(t1,t2);
	t3.convert_s();
	t3.convert_m();
	cout<<"\n time t3 after addition of t1 and t2 is - ";
	t3.put_data();
	return 0;
}