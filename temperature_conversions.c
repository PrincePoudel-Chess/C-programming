#include<stdio.h>
int main()
{ 
	float tc,tf,tc1,tf1;
	printf("Enter the temperature in Celsius and Fahrenheit ");
	scanf("%f %f",&tc,&tf);
	
	tf1=(9*tc/5)+32;
	tc1=((tf-32)/9)*5;
	
	printf("After the conversion the temperature are %f %f ",tf1,tc1);
	
	return 0;
}

