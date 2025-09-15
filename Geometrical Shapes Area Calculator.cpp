/*Define the base class Shape with two data members of any numeric type that are employed to
compute the area of respective shape. Add member functions to input the data members
values and display the area in base class only. Derive two classes from base class namely,
Triangle & Rectangle. Take the display function as virtual in base class and redefine it in the
derived classes. Using above classes , write a program to accept parameters for triangle or
rectangle and display the area Using Virtual Functions.*/
#include <iostream>
#include <string>
using namespace std;
class shape{
protected:string name;
	     float height;
	     float width;
	     float length;
public:
	     virtual void display();
	     void input();
};
void shape::display(){};
void shape::input(){
	cout<<"Enter Dimensions of Shape (Enter 1 if not applicable):"<<endl;
	cout<<"Enter width of "<<name<<":";
	cin>>width;
	cout<<"Enter height of "<<name<<":";
	cin>>height;
	cout<<"Enter length of "<<name<<":";
	cin>>length;
};
class triangle:public shape{
public:
		void display();
		triangle(){name="Triangle";};
};
void triangle::display(){
	cout<<"Display of Derived Class"<<endl;
	cout<<"The area of "<<name<<" is:"<<0.5*height*width<<endl;
};
class rectangle:public shape{
public:
		void display();
		rectangle(){name="Rectangle";};
};
void rectangle::display(){
	cout<<"Display of Derived Class"<<endl;
	cout<<"The area of "<<name<<" is:"<<width*height<<endl;
};
int main(){
	shape *base;
	triangle t1;
	base=&t1;
	base->input();
	base->display();
	rectangle r1;
	base=&r1;
	base->input();
	base->display();
};
