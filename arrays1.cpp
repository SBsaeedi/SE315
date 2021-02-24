#include<iostream>
using namespace std;

int main(){
	int ar[1000],size,i,max=0;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	for(i=0;i<size;i++){
		cout<<"Enter a value for index: "<<i<<endl;
		cin>>ar[i];
	}
	max=ar[0];
	for(i=0;i<size;i++){
		if(max<ar[i]){
			max=ar[i];
		}
	}
	cout<<"Maximum: "<<max;
}
