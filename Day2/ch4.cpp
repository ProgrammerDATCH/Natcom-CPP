#include<iostream>
using namespace std;

int getCurrentAge(int birthYear){
	if(birthYear )
	return (2024-birthYear);
}

int main(){
	int bornYear;
	cout<<"Enter your birth year: ";
	cin>>bornYear;
	if(getCurrentAge(bornYear) > 0)
	{
		cout<<"You are now "<<getCurrentAge(bornYear)<<" years old"; 
	}
	else{
		cout<<"You entered invalid year.";
	}
	return 0;
}
