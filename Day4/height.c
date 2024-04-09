#include<stdio.h>
int main()
{
	float heights[20];
	int i=0;
	int j=14;
	for(i=0; i<20; i++){
		printf("Enter height of house number %d: ", i+1);
		scanf("%f", &heights[i]);
	}
	for(j=14; j<20; j++){
		printf("Height of house number %d is %.2f.\n", j+1, heights[j]);
	}
	return 0;
}
