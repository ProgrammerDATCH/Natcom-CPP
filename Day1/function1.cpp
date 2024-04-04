#include<iostream>
using namespace std;

int currentAge(int bornYear){
	return (2024-bornYear);
}

int main(){
	int birthYear;
	string name;
	cout<<"Enter you name: ";
	cin>>name;
	cout<<"Enter your birth year: ";
	cin>>birthYear;
	int age = currentAge(birthYear);
	cout<<"Hello "<<name<<", you are now "<<age<<"years old.";
	return 0;
}
