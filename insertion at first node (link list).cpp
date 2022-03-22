//Demonstration of single link list in C++
// Insertion of a node at starting position
#include<iostream>
#include<string>
using namespace std;
class emp
{
	int id;
	string name;
	float sal;
	string dep;
	emp *next;
	public:
		friend class LinkList;
};
class LinkList
{ 
	emp *first;
	public:
		LinkList()
		{
			first=0;
		}
		void create_list();
		void display_list();
};

void LinkList::create_list()
{
	char ch='y';
	while(ch=='y')
	{
		emp *nw,*ptr;
		nw=new emp();
		cout<<"\n Enter the info of the Employee ";
		cout<<"\n Enter ID::";
		cin>>nw->id;
		cout<<"\n Enter Name::";
		cin>>nw->name;
		cout<<"\n Enter Salary::";
		cin>>nw->sal;
		cout<<"\n Enter Department::";
		cin>>nw->dep;
		nw->next=0;
		if(first==0) // code for linking list at strating of the list
			first=nw;
		else
		{
			nw->next=first;
			first=nw;
		}
		cout<<"\n Do you want to insert more info in the list y/n ::";
		cin>>ch;
	}
}
void LinkList::display_list()
{ 
	emp *ptr;
	cout<<"\n Details of Employee are::";
	for(ptr=first;ptr!=0;ptr=ptr->next)
	{
		cout<<"\t"<<ptr->id<<"\t"<<ptr->name<<"\t"<<ptr->sal<<"\t"<<ptr->dep;
		cout<<"\n";
	}
}
int main()
{
	LinkList l1;
	l1.create_list();
	l1.display_list();
	return 0;
}