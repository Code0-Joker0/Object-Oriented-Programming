/*Design an educational Institution that maintains a database of all staff members where the database is
segregated into a number of classes having hierarchical relationships. Define all classes with suitable
data members and required member functions to build the database and fetch individual details .
*/
#include <iostream>
using namespace std;
class staff{
	protected:
				string name,dept;
				int staffID;
	public:
				void accept();
				void display();
};
void staff::accept(){
	cout<<"Enter Name of staff:";
	cin>>name;
	cout<<"Enter Department of staff:";
	cin>>dept;
	cout<<"Enter the ID of staff:";
	cin>>staffID;
};
void staff::display(){
	cout<<"\tDetails of "<<name<<"\n";
	cout<<"Name of staff:"<<name<<"\n";
	cout<<"Department of staff:"<<dept<<"\n";
	cout<<"ID of staff:"<<staffID<<"\n";
};
class teacher:protected staff{
		string subj;
		int exp;
	public:
			void accept();
			void display();
};
void teacher::accept(){
	staff::accept();
	cout<<"Enter Subject of teacher "<<name<<":";
	cin>>subj;
	cout<<"Enter Experience of teacher "<<name<<" in years:";
	cin>>exp;
};
void teacher::display(){
	staff::display();
	cout<<"Subject of staff:"<<subj<<"\n";
	cout<<"Experience of staff:"<<exp<<"\n";
};
class helpstaff:protected staff{
		string designation;
		int yrs;
	public:
			void accept();
			void display();
};
void helpstaff::accept(){
	staff::accept();
	cout<<"Enter Designation of "<<name<<":";
	cin>>designation;
	cout<<"Enter Age of "<<name<<" in years:";
	cin>>yrs;
};
void helpstaff::display(){
	staff::display();
	cout<<"Designation of staff:"<<designation<<"\n";
	cout<<"Age of staff:"<<yrs<<"\n";
};
int main(){
	int no1,no2;
	cout<<"Enter number of teaching staff:";
	cin>>no1;
	teacher t1[no1];
	for(int i=0;i<no1;i++){
		t1[i].accept();
	};
	cout<<"Enter number of helping staff:";
	cin>>no2;
	helpstaff s1[no2];
	for(int i=0;i<no2;i++){
		s1[i].accept();
	};
	cout<<"Details of teaching staff are:\n";
	for(int i=0;i<no1;i++){
			t1[i].display();
		};
	cout<<"Details of supporting staff are:\n";
	for(int i=0;i<no2;i++){
			s1[i].display();
		};
	return 0;
}
