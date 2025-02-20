
//WAP to display array elements with their address using array name as a Pointer

#include<stdio.h>


int main(){int i;
	int arr[5] = {1,2,3,4,5};
	for(i=0;i<5;i++){
		printf("%d ",arr+i);
		printf("%d ",*(arr+i));
		printf("\n");
	}
	
	
}

