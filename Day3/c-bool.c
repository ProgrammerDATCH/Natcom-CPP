#include<stdio.h>
int main(){
	// to vote (18+ years, live in Rwanda, have ID)
	int age;
	int haveId;
	bool err = false;
	printf("How many years you have: ");
	scanf("%d", &age);
	printf("Do you have an ID?\nChoose correct answer:\n0.No\n1.Yes\n");
	scanf("%d", &haveId);
	if(age<18) err=true;
	if(haveId != 1) err=true;
	if(err) printf("You can't vote!");
	else printf("Wow, you can vote.");
	return 0;
}
