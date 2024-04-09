#include<iostream>
using namespace std;
int main ()
{
	int stars = 1;
	int rows = 5;
	for(int i = 1; i<= rows; i++){
		int spaces = (rows - i) * 2;
		for(int j=1; j<=spaces/2; j++)
		{
			cout<<" ";
		}
		for(int k=1; k<=stars; k++){
			cout<<"*";
		}
		stars+=2;
		cout<<endl;
	}
	return 0;
}
