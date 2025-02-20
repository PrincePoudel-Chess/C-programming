//Print 1 11 111 1111 11111 .....n terms using recursive function


#include<stdio.h>
int i,n;

void recur(int k){
	if(k == 0){
		return 0;
	}
	for(i=n;i>=k;i--){
		printf("1");
	}
	printf("\t");
	return recur(k-1);
	
}

int main(){
	printf("Enter the no of terms:");
	scanf("%d",&n);
	recur(n);
	
	getch();
	return 0;
	
	
	
}
