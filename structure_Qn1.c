//WAP to create a structure called car and store the informations of car_id,model, and rental  rate perday
//.Create the three car objects and calculate the total rental cost 

#include<stdio.h>

struct c{
	
	char car_id[100];
	char car_model[50];
	int rental_rate;
}car[3];
int main(){
	
	int i,n,total_rr =0;
	for(i=0;i<3;i++){
		printf("Input carid carmodel and car total rental rate per day:");
		scanf("%s %s %d",car[i].car_id,car[i].car_model,&car[i].rental_rate);
	}
	printf("Input the total number of days:");
	scanf("%d",&n);
	for(i=0;i<3;i++){
		total_rr = car[i].rental_rate * n;
		printf("\nThe total rental cost = %d",total_rr);
	}
	
	getch();
	return 0;
	
	
	
	
}
