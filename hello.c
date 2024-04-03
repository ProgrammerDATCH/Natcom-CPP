#include<stdio.h>
int main(){
	char name[20];
	int age;
	printf("Enter your name: ");
	scanf("%s", &name);
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Hello %s You are now %d years old.", name, age);
	return 0;
}
