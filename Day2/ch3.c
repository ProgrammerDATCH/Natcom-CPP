#include<stdio.h>
double getSquare(double num){
	double square = num * num;
	return square;
}
int main(){
	double numGiven, squareOfNum;
	printf("Enter any number: ");
	scanf("%lf", &numGiven);
	squareOfNum = getSquare(numGiven);
	printf("Square of %.2f is %.2f", numGiven, squareOfNum);
	return 0;
}
