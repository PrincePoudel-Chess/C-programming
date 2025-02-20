#include<stdio.h>


int main(){
	
	
	
	FILE *file = fopen("inventory.txt","w");
	fputs("Product Name\t\tQuantity\t\tRate",file);
	fputs("\nAAA\t\t\t  3\t\t\t  50",file);
	fputs("\nBBB\t\t\t  2\t\t\t  100\t\t\tCCC",file);
	fputs("\n4\t\t\t  40.................................................380",file);
	
	
	fclose(file);
	
}
