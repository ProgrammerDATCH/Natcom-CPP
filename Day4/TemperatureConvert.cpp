//c=(f-32)*5/9;
//f=(c*9/5)+32;

#include<iostream>
using namespace std;
int main(){
	cout<<"Enter temperature in Fahrenheit: ";
	float f;
	cin>>f;
	float c=(f-32)*5/9;
	cout<<f<<" Fahrenheit = "<<c<<" Celcius";
	return 0;
}
