#include<stdio.h>

struct book{
	char name[50];
	int pages;
	float price;
};


int main()
{
	struct book b, *bptr;
	
	printf("Enter book name: ");
	scanf("%[^\n]s", b.name);
	
	int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
	printf("\nNumber of pages: ");
	scanf("%d", &b.pages);
	
	printf("\nPrice of the book: ");
	scanf("%f", &b.price);
	
	bptr=&b;
	
	printf("\nBook information using pointer(arrow pointer): ");
	
	printf("\nBook Name: %s\t Pages: %d\t Price: %.2f", bptr->name, bptr->pages, bptr->price);
	
	
	printf("\n\nBook information using pointer(* operator): ");
	printf("\nBook Name: %s\tPages: %d\tPrice: %.2f", (*bptr).name, (*bptr).pages, (*bptr).price);
	
	printf("\n\nBook information using dot operator:\n");
	printf("\nBook Name: %s\tPages: %d\tPrice: %.2f", b.name, b.pages, b.price);
	
	return 0;
}
