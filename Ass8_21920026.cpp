/*	21920026	Pratiksha gaikwad
	Write a C++ program that creates an output file, writes information to it, closes the file and open it again as an input 	file and read the information from the file.

*/#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream f;	//object of fstream class
	char ch;
	//opening file "myfile.txt" in out(write) mode
	f.open("myfile.txt",ios::out);
	if(!f)
	{
		cout<<"Error opening file"<<endl;
		return 0;
	}
	cout<<"file name myfile.txt created"<<endl;
	f<<"SY Btech computer viit pune";	//write text into file
	f.close();
	
   	
	f.open("myfile.txt",ios::in);	//again open file in read mode
	if(!f)
	{
		cout<<"Error opening file"<<endl;
		return 0;
	}
	//read untill end of file is not found.
	while(!f.eof())
	{
		f>>ch;		//read single character from file
		cout<<ch;
	}
	f.close();		//closing file
	return 0;
}
