/*Implement a map associative container in which the keys
will be the Permanent Registration Number (PRN) of the students and the values will be
the name of the respective student. Develop a program that prompts the user for PRN
and then it looks in the map, using the PRN as an index and returns the name of the
student.*/
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
	typedef map <int,string> TypeMap;
	TypeMap Students;
	int prn;
	string name;
	int c;
	cout<<"Enter Number of Entries:";
	cin>>c;
	for(int i=0;i<c;i++){
		cout<<"Enter PRN:";
		cin>>prn;
		cout<<"Enter Name:";
		cin>>name;
		Students.insert(pair<int,string>(prn,name));
	};
	TypeMap::iterator iter;
    cout<<"----------University Students List---------------";
    cout<<"\n Number of Students are:"<<Students.size()<<"\n";
	for(iter=Students.begin();iter!=Students.end();iter++) {
		cout<<iter->first<<":"<< iter->second<<"\n";
	}
    cout<<"\n Enter PRN of the student :";
    cin>>prn;
    iter =Students.find(prn);
    if(iter!=Students.end()){
        cout<<prn<<"'s name is "<<iter->second<<endl;
    }
    else{
        cout<<"Key is not Students"<<"\n";
    }
    cout<<"If you want to Delete List Enter 1:";
    cin>>c;
    if(c==1){
        Students.clear();
        cout<<"List Deleted\n";
    };
	return 0;
};
