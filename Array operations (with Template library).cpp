/*Design a program with a template for sorting the accepted array and displaying it using integer or float type data.Implement any sorting type using Generic Programming*/
#include <iostream>
using namespace std;
template <class S>
S sort(S arr[],int size){
	int mindex;
	for(int i=0;i<size-1;i++){
		mindex=i;
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				mindex=j;
			};
		};
		S temp=arr[mindex];
		arr[mindex]=arr[i];
		arr[i]=temp;
	};
	return 0;
};
template <class T>
T display(T arr[],int size){
	cout<<"Sorted Array=[";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<",";
	};
	cout<<"]\n";
	return 0;
};
int main(){
	int n,c;
	cout<<"Enter Size of Array:";
	cin>>n;
	while(c!=3){
		cout<<"Enter Choice of Array\n(1]Float\n2]Integer\n3]Exit:";
		cin>>c;
		if(c==1){
			float array[n];
			for(int i=0;i<n;i++){
				cout<<"Enter Element in array:";
				cin>>array[i];
			};
			sort(array,n);
			display(array,n);
		}
		else if(c==2){
			int array[n];
			for(int i=0;i<n;i++){
				cout<<"Enter Element in array:";
				cin>>array[i];
			};
			sort(array,n);
			display(array,n);
		};
	};
};
