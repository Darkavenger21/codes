#include<iostream>
using namespace std;

class demo_array
{
	public:
	int *arr;
	int n;
	void get_input()
	{
		cout<<"Enter the size of array : ";
		cin>>n;
		arr = new int[n];
		cout<<"Enter the elements of array : "<<endl;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
	}
	void display()
	{
		int i;
		cout<<"Given array is : "<<endl;
		for(i=0;i<n;i++)
		{
			cout<<arr[i]<<"\t";
		}
	}
	void min()
	{
		int i, min=arr[0];
		for(i=1; i<n; i++)
		{
			if(arr[i]<min)
				min=arr[i];
		}
		cout<<" \n minimum element is "<<min<<endl;
	}
	void max()
	{
		int i, max=arr[0];
		for(i=1; i<n; i++)
		{
			if(arr[i]>max)
				max=arr[i];
		}
		cout<<"\n maximum element is "<<max<<endl;
	}
	void search()
	{
		int i,num,f=0;
		cout<<"Enter the element to search: ";
		cin>>num;
		for(i=0; i<n; i++)
		{
			if(num == arr[i])
			{
				cout<<"number found at "<<i+1<<"th position"<<endl;
				f=1;
				break;
			}	
		}
		if(f==0)
			cout<<"Number not in array";
	}
};

int main()
{
	demo_array obj;
	obj.get_input();
	obj.display();
	obj.min();
	obj.max();
	obj.search();
	
	return 0;
}