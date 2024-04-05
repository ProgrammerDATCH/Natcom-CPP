#include<iostream>
using namespace std;
int main(){
	// to vote (18+ years, live in Rwanda, have ID)
	int age;
	int haveId;
	bool err;
	cout<<"How many years you have: ";
	cin>>age;
	cout<<"Do you have an ID?\nChoose correct answer:\n0.No\n1.Yes\n";
	cin>>haveId;
	if(age<18) err=true;
	if(haveId != 1) err=true;
	if(err) cout<<"You can't vote!";
	else cout<<"Wow, you can vote.";
	return 0;
}
