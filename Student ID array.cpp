// Demonstration of Array of Objects
#include<iostream>
using namespace std;

class student
{
	string name;
	float age;
	int S_id;
	static int count;
	public:
	void get_data();
	void put_data();
};
int student::count=100;
void student::get_data()
	{ 
		S_id=count;
		cout<<"\n Enter Name::";
		cin>>name;
		cout<<"\n Enter Age::";
		cin>>age;
		count++;
	}
void student::put_data()
	{ 
		cout<<"ID:: " <<S_id<<"\n";
		cout<<"Name:: "<<name<<"\n";
		cout<<"Age:: "<<age<<"\n";
	}
int main()
{
	int n;
	cout<<"\n Enter Number of student in your school:";
	cin>>n;
	student *p;
	p=new student[n];
	for(int i=0;i<n;i++)
	{ 
		cout<<"Enter Deatils of students :: "<<i+1;
		p[i].get_data();
	}
	for(int i=0;i<n;i++)
	{
		 cout<<"Deatils of students :: "<<i+1<<"\n";
		p[i].put_data();
	}
	return 0;
}