#include <iostream>
using namespace std;
class Student
{
	protected:
		int roll;
	public:
		void get_roll()
		{
			cout<<"Enter your roll no:";
			cin>>roll;
		}
		void dis_roll()
		{
			cout<<"Your roll is:"<<roll;
		}
};
class test: public virtual Student
{
	public:
		int *ar,n;	
		void get_n()
		{
			cout<<"\nEnter the no. of subjects:";
			cin>>n;
			ar=new int[n];
		}
		void get_marks(){
			for(int i=0;i<n;i++)
			{
				cout<<"Enter the marks of subject no. "<<i+1<<" :";
				cin>>ar[i];
			}			
		}
};
class sports: public virtual Student
{
	public:
		int score_sports;
		void get_sports_score()
		{
			cout<<"Enter your sports score:";
			cin>>score_sports;
		}
};
class result: public test, public sports
{
	public:
		int val=0;
		int grandtotal(int a[],int s1)
		{
			val=s1;
			for (int j=0;j<n;j++)
			{
				val+=a[j];
			}
			return val;
		}
		int equi(int a)
		{
			return (a/(n+1));			
		}
};
int main()
{
	int var,per;
	result res;
	res.get_roll();
	res.dis_roll();
	res.get_n();
	res.get_marks();
	res.get_sports_score();
	
	var=res.grandtotal(res.ar,res.score_sports);

	cout<<"Your grand total is: "<<var;
	cout<<"\n";	
	
	per=res.equi(var);
	cout<<"You got "<<per<<" %\n";
	if(per>90)
	{
		cout<<"Your got A";
	}
	else if(per>80)
	{
		cout<<"You got B";
	}	
	else if(per>60)
	{
		cout<<"You got C";
	}
	else if(per>40)
	{
		cout<<"You got D";
	}
	else
	{
		cout<<"You Failed!!";
	}
	cout<<"\n";	
}