/*Implement a class Complex which represents the Complex Number.
Implement the following functions Using Operator Overloading:
1. Constructors ( Include all constructor types)
2. Overload operator + to add two complex numbers using member function
3. Overload operator * to multiply two complex numbers using friend function
4. Overload operators << and >> to output and accept Complex Numbers*/
#include<iostream>
using namespace std;
class complex{
	float real,imj;
	public:
	static int count;
	complex(float a, float b);
	//complex();
	void display();
	complex operator +(complex num);
	friend complex operator *(complex num1,complex num2);
	friend istream &operator>>(istream &inp,complex &ob);
	friend ostream &operator<<(ostream &out,complex &ob);
	};
int complex::count=0;
complex operator *(complex num1,complex num2){
	return complex((num1.real*num2.real-num2.imj*num2.imj),(num1.real*num2.imj+num2.real*num1.imj));
	};
complex complex::operator +(complex num){
	return complex(real+num.real,imj+num.imj);
	};
istream &operator>>(istream &inp,complex &ob){
	cout<<"Enter real part of No  "<<ob.count<<":";
	inp>>ob.real;
	cout<<"Enter imaginary part of No "<<ob.count<<":";
	inp>>ob.imj;
	return inp;
};
ostream &operator<<(ostream &out,complex &ob){
	out<<ob.real<<"+";
	out<<"i"<<ob.imj<<endl;
	return out;
};
/*complex::complex(){
	cout<<"Inside Default constructor\n";
	real=00.00;
	imj=00.00;
	};*/
complex::complex(float a, float b){
	real=a;
	imj=b;
	count+=1;
	};
int main() {
	complex n2(0,0);
	cin>>n2;
	cout<<n2;
	complex n3(0,0);
	cin>>n3;
	cout<<n3;
	complex n4(0,0),n5(0,0);
	cout<<"Addition of numbers is:\n";
	n4=n2+n3;
	cout<<n4;
	cout<<"Multiplication of numbers is:\n";
	n5=n2*n3;
	cout<<n5;
	return 0;
};
