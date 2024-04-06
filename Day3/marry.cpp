#include<iostream>
using namespace std;
int main(){
	char name[20];
	int age;
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"Enter your age: ";
	cin>>age;
	if(age>=21) for(int i=0; i<21; i++) cout<<"You can marry\n";
	else cout<<"Sorry you can't marry.";
	return 0;
}
