/*5. Write a program to calculate TSA of a cylinder having its radius 
(r=7)& height (h=10). */

#include<stdio.h>
#include<conio.h>
#define PI 3.1415
int main()
{
	int radius=7, height=10, Total_surface_area;
	Total_surface_area=2*PI*radius*(radius+height);
	printf("The total surface area of cylinder is %d.", Total_surface_area);
	
	getch();
	return 0;
}
