#include <iostream>
using namespace std;

class demoClass
{
	public:
		int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
		void getData()
		{			
		   	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
		}
		void putData()
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<"\n";
			}
		}

		void rowSum()
		{
			int sum=0;
			for(int i=0;i<3;i++)
			{
				sum=0;
				for(int j=0;j<3;j++)
				{
					sum+=a[i][j];
				}
				cout<<"Sum of "<<i+1<<" row:"<<sum;
				cout<<"\n";
			}
		}

		void colSum()
		{
			int sum=0;
			for(int i=0;i<3;i++)
			{
				sum=0;
				for(int j=0;j<3;j++)
				{
					sum+=a[j][i];
				}
				cout<<"Sum of "<<i+1<<" column:"<<sum;
				cout<<"\n";
			}
		}

		void transpose()
		{
			cout<<"\nTranspose:\n";
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<a[j][i]<<" ";
				}
				cout<<"\n";
			}
		}

		void sum()
		{
			int sum=0;
			for(int i=0;i<3;i++)
			{
			 	for(int j=0;j<3;j++)
				{
					sum+=a[j][i];
				}
				cout<<"\n";
			}
			cout<<"Sum of all elements: "<<sum;
		}

		void trace()
		{
			int sum=0;
			for(int i=0;i<3;i++)
			{
				sum+=a[i][i];
			}
			cout<<"\nTrace is: "<<sum;
		}
};


int main(){

	demoClass obj;

	obj.getData();
	obj.putData();
	obj.rowSum();
	obj.colSum();
	obj.transpose();
	obj.sum();
	obj.trace();
}
