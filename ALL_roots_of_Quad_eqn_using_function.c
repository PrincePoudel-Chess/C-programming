#include<stdio.h>
#include<math.h>

void f(float a,float b,float c){
	float x1,x2;
	
	float del = b*b-4*a*c;
	
		if(del==0){
		
			x1 = -b/(2*a);
			printf("\nRoot=%.2f",x1);
			}
		else if(del>0){
			
			x1= (-b+(sqrt(b*b-4*a*c)))/(2*a);
			x2 = (-b-(sqrt(b*b-4*a*c)))/(2*a);
			printf("\nRoot1-x1=%.2f   Root2-x2=%.2f",x1,x2);}
				
		
		else{
			printf("\nRoot1(x1)=%.2f+%.2fi",-b/(2*a),sqrt(4*a*c-b*b)/(2*a));
			printf("\tRoot2(x2)=%.2f-%.2fi",-b/(2*a),sqrt(4*a*c-b*b)/(2*a));}
	
	
	
}

int main(){
	float a,b,c;
	printf("Enter the values of a,b,c:");
	scanf("%f %f %f",&a,&b,&c);
	f(a,b,c);
	getch();
	return 0;
	
}
