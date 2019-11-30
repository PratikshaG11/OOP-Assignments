/*	21920026   pratiksha gaikwad
	Implement a class Complex which represents the Complex Number data type. Implement the following operations: 1. Constructor (including a default constructor which creates the complex number 0+0i). 2. Overloaded operator+ to add two complex numbers. 3. Overloaded operator* to multiply two complex numbers. 4. Overloaded << and >> to print and read Complex Numbers. 

*/
#include<iostream>
using namespace std;
class complex
{
	float i;
	float r;
	public:
	complex()	// constructor
	{
		i=0;
		r=0;
	}
	complex operator+(complex);	// operator + overloaded
	complex operator-(complex);	// operator - overloaded
	complex operator*(complex);	// operator * overloaded
	complex operator/(complex);	// operator / overloaded for complement
	friend istream &operator>>(istream &input,complex &t)	// operator >> overloaded to input
	{
		cout<<"Enter real part=";
		input>>t.r;
		cout<<endl;
		cout<<"Enter imaginary part=";
		input>>t.i;
	}
	friend ostream &operator <<(ostream &output,complex &t)  // operator << overloaded to output
	{
		output<<t.r<<"+"<<t.i<<"i"<<endl;
	}
	
};
complex complex::operator+(complex c)	// addition
{
	complex temp;
	temp.r=r+c.r;
	temp.i=i+c.i;
	return(temp);
}
complex complex::operator-(complex c)	// subtraction
{
	complex temp1;
	temp1.r=r-c.r;
	temp1.i=i-c.i;
	return(temp1);
}
complex complex::operator*(complex c)	// multiplication
{
	complex temp2;
	temp2.r=(r*c.r)-(i*c.i);
	temp2.i=(i*c.r)+(r*c.i);
	return(temp2);
}
complex complex::operator/(complex c)	// complement
{
	complex temp3;
	temp3.r=c.i;
	temp3.i=c.r;
	return(temp3);
}

int main()
{
	complex c1,c2,c3,c4,c5,c6;
	cout<<"Default constructor value="<<endl;
	cout<<c1;
	cout<<"Enter first number=";
	cin>>c1;
	cout<<endl;
	cout<<"Enter second number=";
	cin>>c2;
	c3=c1+c2;					// complex number addition
	c5=c1-c2;					// complex number subtraction
	c4=c1*c2;					// complex number multiplication
	c6=c1/c2;					// complex number complement
	cout<<"First number=";
	cout<<c1;
	cout<<endl;
	cout<<"second number=";
	cout<<c2;
	cout<<endl;
	cout<<"Addition=";
	cout<<c3<<endl;
	cout<<"Multiplication=";
	cout<<c4<<endl;
	cout<<"Subtraction=";
	cout<<c5<<endl;
	cout<<"Complement=";
	cout<<c6<<endl;
	
	return 0;	
		
}




