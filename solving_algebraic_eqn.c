//Finding the solution of theequation x^5+30x^2-10

#include<stdio.h>
#include<math.h>

int main(){
	int count=0;
	float error;
	float test;
	float value,x=1;
	while(1){
		test = 10-3*x*x;
		value = pow(test,0.2);
		if(value<0){
			perror("Guessing Out of range.");
			return;
		}
		else{
			printf("\nLoopNo:%d value=%f",count,value);
			error = fabs(x-value);
			if(error <= 0.00001){
				printf("\n%f is the required solution.",x);
				return;
			}
			x= value;
		}
		if(count ==50){return;
		}
		count ++;
	}


}
