#include<iostream>
using namespace std;

int main()
{
	int n;
	int arr[n],i,j,k;
	cout<<"enter the size of array: ";
	cin>>n;
	cout<<"enter the elements of array: ";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int fact=1;
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
		cout<<"the factorial is 1";
		else
		{
			for(j=1;j<=arr[i];j++)
			{
				fact*=j;
				k=fact;
			}
		}
	cout<<"\nthe factorial is "<<k;
	fact=1;
	}
	return 0;
}