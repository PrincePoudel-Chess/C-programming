//WAP to read marks of 10 students from user and store in an array using pointer notation.Calculate average marks on screen

#include<stdio.h>

int main(){
	int i;
	int m[10];
	int sum;
	float average;
	for(i=0;i<10;i++){
		scanf("%d",m+i);
		sum += m[i];
	}
	average = (float)sum/10;
	printf("The average is:%.2f",average);
	
}
