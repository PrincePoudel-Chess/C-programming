#include<stdio.h>
#include<conio.h>
int main()
{
	//not used for leap years
	int days,y,m,d,rd; // rd means remaining days
	printf("Enter days ");
	scanf("%d",&days);
	y=days/365;
	rd=days%365;
	m=rd/30;
	d=rd%30;
printf("The year is %d \n The month is %d \n The day is %d",y,m,d);
getch ();	
}
