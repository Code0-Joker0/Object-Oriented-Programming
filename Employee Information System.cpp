/*
Develop a program in C++ to create a database of an
employee's information system containing the following fields: Name, employee ID,
Department, Date of Joining, Contact address, Telephone number etc. Construct the database
with suitable member functions to accept and print employee details. Make use of constructor
types, destructor, static members, inline function and dynamic memory allocation using
operators-new and delete.
*/
#include <iostream>
#include <string.h>
using namespace std;
class Employee{
	string name;
	int ID;
	int number;
	int day,month,year;
	string address;
public:
	inline int welc(){
		cout<<"\n\n\n\nWelcome to Employee Management System!!"<<endl;
		return 0;
	};
	Employee();
	Employee(Employee& C);
	Employee(string N,string AD,int id,int no,int d,int m,int y);
	~Employee();
	static int count;
	int accept();
	int display();
};
int Employee::count;
Employee::Employee(Employee &C){
	cout<<endl;
	cout<<"This is copy constructor"<<endl;
	name=C.name;
	ID=C.ID;
	number=C.number;
	day=C.day;
	month=C.month;
	year=C.year;
	address=C.address;
};
Employee::Employee(string N,string AD,int id,int no,int d,int m,int y){
	cout<<endl;
	cout<<"This is Parameterized constructor"<<endl;
	name=N;
	ID=id;
	number=no;
	day=d;
	month=m;
	year=y;
	address=AD;
};
Employee::Employee(){
	cout<<endl;
	cout<<"This is Default constructor"<<endl;
	name="Error";
	ID=00;
	number=00;
	day=00;
	month=00;
	year=00;
	address=="Error";
};
Employee::~Employee(){
	cout<<"Goodbye !!!!!\n"<<name<<endl;
}
int Employee::display(){
	count++;
	cout<<"Employee Name is:"<<name<<endl;
	cout<<"Employee ID is:"<<ID<<endl;
	cout<<"Employee Number is:"<<number<<endl;
	cout<<"Employee Address is:"<<address<<endl;
	cout<<"Employee Joining Date is:"<<day<<"/"<<month<<"/"<<year<<endl;
	cout<<"Number of employees is:"<<count<<endl;
	return 0;
};
int main(){
	string *N=new string,*AD=new string;
	int *id=new int,*no=new int,*d=new int,*m=new int,*y=new int;
		cout<<"Enter Employee Name:";
		cin>>*N;
		cout<<"Enter Employee ID:";
		cin>>*id;
		cout<<"Enter Employee Number:";
		cin>>*no;
		cout<<"Enter Employee Address:";
		cin>>*AD;
		cout<<"Enter Joining date in format(DDMMYY):";
		cin>>*d>>*m>>*y;
		Employee E1(*N,*AD,*id,*no,*d,*m,*y);
		E1.welc();
		E1.display();
		Employee E2;
		E2.welc();
		E2.display();
		Employee E3(E1);
		E3.welc();
		E3.display();
		cout<<endl;
		cout<<"This is Dynamic object"<<endl;
		Employee *E4=new Employee("Ved","PUNE",6969,100,11,07,2024);
		E4->welc();
		E4->display();
	delete id;
	delete no;
	delete d;
	delete m;
	delete y;
	delete N;
	delete AD;
	delete E4;
		return 0;
};
