#include<stdio.h>

struct cash{
	int dollars;
	int cents;
};
int main(){
	struct cash money;
	printf("Enter the dollars and cents:");
	scanf("%d %d",&money.dollars,&money.cents);
	struct cash *pt = &money;
	func(pt);
	getch();	
	
}


void func(struct cash *pt){
	printf("Money = %d.%d dollars",pt->dollars,pt->cents);
	//Conversion
	printf("\nNepali_Currency:%.2f",((float)pt->dollars+(float)pt->cents/100)*135);
	
	
}
