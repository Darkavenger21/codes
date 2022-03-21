// implementation of single link list in C++
#include<iostream>
using namespace std;
class node
{
	int info;
	node *next;
	public:
		friend class linklist;
};
class linklist
{
	node *first;
	public:
		linklist()
		{
			first=0;
		}
	void create_list();
	void display();
};

void linklist::create_list()
{
	node *nw,*ptr;
	char ch='y';
	while(ch=='y')
	{

		nw=new node();
		cout<<"\n Inter the Info in the link list:" ;
		cin>>nw->info;
		nw->next=0;
		// insetion of a node at end of link list

		if(first==0) // when link list is empty
		{
			first=nw;
		}
		else
		{
			for(ptr=first;ptr->next!=0;ptr=ptr->next);
				ptr->next=nw;
		}
		cout<<"\n Do you want to insert any more node y/n ::";
		cin>>ch;
	}
}
void linklist::display()
{
	node *ptr;
	cout<<"\n The elements of link list are::";
	for(ptr=first;ptr!=0;ptr=ptr->next)
		cout<<"\t"<<ptr->info;
}
int main()
{
	linklist obj;
	obj.create_list();
	obj.display();
	return 0;
}