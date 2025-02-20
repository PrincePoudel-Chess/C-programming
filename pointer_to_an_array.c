#include<stdio.h>


int main(){
	int arr[]= {1,2,3,4};
	int (*p)[4]= &arr;
	printf("%d",(*p)[2]);
	
	
}
