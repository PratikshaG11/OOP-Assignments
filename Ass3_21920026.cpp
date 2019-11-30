/*	21920026	Pratiksha Gaikwad
	Implement C++/Java/Python program to create a base class called shape. Use this class to store two double type values that could be used to compute the area of figures. Derive two specific classes called function get_data() to initialize base class data members and another member function display_area() to compute and display the area of figures. Make classes to suit their requirements. Using these three classes, design a program that will accept dimension of a triangle or a rectangle interactively, and display the area. Remember the two values given as input will be treated as lengths of two sides in the case of rectangles, and as base and height in the case of triangles, and used as follows:
Area of rectangle= x*y Area of triangle =1/2*x*y
*/

#include<iostream>
using namespace std;
class Shape					// base class
{
    protected: 
    double a,b;
    public:
    void get_data ()
    {
        cin>>a>>b;
    }
    virtual void display_area () = 0;		//virtual function
};
 // Implementing hirachical inheritance
class Triangle:public Shape			// derive class1	
{
    public: 
    void display_area ()
    {
        cout<<endl<<"Area of triangle= "<<0.5*a*b<<endl;	// calculating area of triangle
    }
};
 
class Rectangle:public Shape			// derive class2
{
    public: 
    void display_area ()
    {
        cout<<endl<<"Area of rectangle= "<<a*b<<endl;		// calculating area of rectangle
    }
};
 
int main()
{   
    Triangle t;			// derive class1 object
    Shape *st = &t;		// Giving reference to base class object of derive class object
    
    Rectangle r;		// derive class2 object
    Shape *sr = &r;		// Reference of object is given 
    int c;
    cout<<endl<<"1)Area of Triangle"<<endl<<"2)Area of Rectangle"<<endl;
    cout<<"Enter your choice=" ;
    cin>>c;
    switch(c)
    {
    	case 1:
    	cout<<"Enter base and height= ";
    	st->get_data();
    	st->display_area();
    	break;
     
     	case 2:
    	cout<<"Enter length and breadth= ";
    	sr->get_data();
    	sr->display_area();
    	break;
    	
    	default:
    	cout<<"Invalid choice!"<<endl;
    
    }
    return 0;   
}
