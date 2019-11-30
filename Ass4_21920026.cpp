/* 	21920026 	Pratiksha Gaikwad
Write a function template and class template selection Sort. Write a program that inputs, sorts and outputs an integer array and a float array. */

#include<iostream>
#include<limits>
using namespace std;
template<class T>       	// template class 
T selection_sort()        //Template function
{
	T a[10];
        T temp;
        for(int i=0;i<10;i++)        //Accepting elements
        {
                cout<<"a["<<i<<"]=";
                cin>>a[i];
        }
         for(int i=0;i<10;i++)            //selection Sorting 
         {
              for(int j=i+1;j<10;j++)
              {
                   if(a[i]>a[j])
                   {
                        temp=a[i];
                        a[i]=a[j];
                       a[j]=temp;
                }
            }
         }

         for(int i=0;i<10;i++)        //Displaying sorted element
         {
            cout<<a[i]<<"\n";
         }
}
int main()
{
    cout<<"Integer sorting"<<endl;
    selection_sort<int>();		// sorting int element 
    cout<<"Floating sorting"<<endl;	// sorting float element
    selection_sort<float>(); 
    return 0;     
}

