/*Design a program with the following functionalities:
1. A function to read two numbers(Double type)
2. A function to calculate division of these two numbers
3. A try block to detect and throw an exception when divide by zero condition occurs
4. Appropriate catch block to handle the exception thrown*/
#include <iostream>
using namespace std;
class Compute{
private:
		double a,b;
public:
		void accept();
		void division();
};
void Compute::accept(){
	cout<<"Enter First Number:";
	cin>>a;
	cout<<"Enter Second Number:";
	cin>>b;
};
void Compute::division(){
	try{
if(b==0){throw (b);}
		else{cout<<"Division of Entered numbers is:"<<a/b<<endl;};
	}
	catch(double x){cout<<"Denominator Cannot be Zero"<<endl;}
};
int main(){
	Compute c1,c2;
	c1.accept();
	c1.division();
	c2.accept();
	c2.division();
	return 0;
};
