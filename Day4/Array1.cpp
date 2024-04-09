//Array
#include<iostream>
using namespace std;
int main(){
	int ages[5];
	for(int i=0; i<5; i++){
		cout<<"Enter age of student "<<i+1<<": ";
		cin>>ages[i];
	}
	cout<<"\n\nAges of students\n=============\n\n";
	for(int j=0; j<5; j++){
		cout<<"Student "<<j+1<<" is "<<ages[j]<<" years old.\n";
	}
	return 0;
}
