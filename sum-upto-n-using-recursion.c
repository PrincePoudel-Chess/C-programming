#include<stdio.h>


int func(int n, int sum){
	if(n==0){
		return sum;
	}
	sum +=n;
	return func(n-1,sum);
}

int main(){int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int sum =0;
	printf("The sum is %d.",func(n,sum));
	getch();
	return 0;
	
	
	
}
