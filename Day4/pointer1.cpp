//pointers
#include<iostream>
using namespace std;
int main(){
	int age = 12;
	int age2 = 15;
	int *p, *p2;
	p=&age;
	p2=&age2;
	age=56;
	cout<<"value of age is : "<<*p;
	cout<<"\nLocation of age 2 is : "<<p2;
	return 0;
}
