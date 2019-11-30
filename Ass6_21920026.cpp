// 	21920026 	Pratiksha Gaikwad
//			Assignment 6: vector operations
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{	
    cout<<"(";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];    
        if(i!=v.size()-1)
             cout<<",";
    }
    cout<<")";
    cout<<"\n";
}

int main()
{
    vector<int> v;				// creating vector object
    cout<<"Initial size= "<<v.size()<<endl;	// initial size of vector using size() 

    int x,no,ino,dno,pi,ie,de,scr,size=0;
    cout<<"Enter how many elements you want? = ";
    cin>>no;
    cout<<"Enter values= "<<endl;
    for(int i=0;i<no;i++)				// Accepting vector using push_back() 
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"\nSize after inserting "<<no<<" values= "<<v.size();

    cout<<"\nCurrent contents= "<<endl;
    display(v);
    
    cout<<"Scalar quantity";		// Scalar quantity
    cout<<"\nEnter Scalar quantity= ";
    cin>>scr;
    vector<int>::iterator itr4=v.begin();	// iterator object
    for(int j=0;j<no;j++)
    	v[j]=v[j]*scr;
    display(v);
    
    cout<<"Enter element to push in vector= ";
    cin>>pi;					// Displaying vector
    v.push_back(pi);

    cout<<"\nSize after push_back()= "<<v.size()<<endl;
    cout<<"\nNow the contents of vector after push_back()"<<endl;
    display(v);
    
    cout<<"Insertion"<<endl;
    cout<<"\nEnter element position= ";
    cin>>ino;
    vector<int>::iterator itr1=v.begin();	// iterator object
    itr1=itr1+ino;
    cout<<"Enter Number to insert= "<<endl;
    cin>>ie;
    v.insert(itr1,1,ie);			// Iterator created and inserted 

    cout<<"\nContents of vector after insrting= ";
    display(v);
    cout<<"\nRemoving elements position= "<<endl;
    cout<<"Enter position of removing element= ";
    cin>>de;
    v.erase(v.begin()+de);		// Removing elements
    cout<<"\nContents after deletion= ";
    display(v);
    

    cout<<endl;
    return 0;

   }

