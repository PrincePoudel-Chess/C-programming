//WAP to find the sum of all elements of an array using Pointer.

#include<stdio.h>

int main(){int i,sum=0;
	int a[5] ={1,2,3,4,5};
	int size = sizeof(a)/sizeof(a[0]);
	for(i=0;i<size;i++){
		sum += a[i];
	}
	printf("%d",sum);

	
	
	
}
