#include <stdio.h>

int check(int a){
	if(a>=0){
		return 0;
	}
	else{
		return -1;
	}
}


int main() {
	int i = check(-4);
	if(i==0){
		printf("Positive.\n");
	}
	else{
		printf("Negative.");
	}
	
    
    return 0;  // Return 0 to indicate success
}
