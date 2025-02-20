#include<stdio.h>

int main(){
	FILE *file;
	file = fopen("hello.txt","r");
	if(file == NULL){
		
		printf("Didn't Open.'");
	}
	else{printf("Opened Sucessfully");
	};
	return 0;
	getch();
	
	
	
}
