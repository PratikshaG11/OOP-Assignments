/*	21920026		Pratiksha Gaikwad
	Using standard template library (STL) list container implement following member functions of list class: empty, insert, 	reverse, sort, Unique, using iterator
*/

#include<iostream>
#include<list>
using namespace std;
void display(list<int> &l)
{
	cout<<"[";
	list<int>::iterator itr;
	for(itr=l.begin();itr!=l.end();++itr)
	{
		cout<<*itr<<"  ";
	}
	cout<<"]"<<endl;
}
int main()
{
	list<int>l1;
	list<int>l2(5);
	int val,no;
	cout<<"Enter number of element in list 1="<<endl;
	cin>>no;
	
	cout<<"Enter values="<<endl;
	for(int i=0;i<no;i++)
	{
		cin>>val;
		l1.push_back(val);
	}
	display(l1);
	cout<<endl;
	list<int>::iterator itr2;
	for(itr2=l2.begin();itr2!=l2.end();++itr2)
	{
		*itr2=rand()/100;
	}
	cout<<"List1 elements are= "<<endl;
	display(l1);
	cout<<endl;
	cout<<"List2 elements are= "<<endl;
	display(l2);
	cout<<endl;
	
	list<int> listA,listB;
	listA=l1;
	listB=l2;
	l1.merge(l2);
	cout<<"Merged unsorted list="<<endl;
	display(l1);
	cout<<endl;
	listA.sort();
	listB.sort();
	
	listA.merge(listB);
	cout<<"Merge sorted list is="<<endl;
	display(listA);
	cout<<endl;
	
	cout<<"Reverse of list="<<endl;
	listA.reverse();
	display(listA);
	cout<<endl;
	if(listA.empty())
	{
		cout<<"List is empty"<<endl;
	}
	else
	{
		cout<<"List is not empty"<<endl;
	}
	cout<<endl;
}
