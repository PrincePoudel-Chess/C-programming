
#include<stdio.h>
int main(){
    float units,cost;
    printf("Enter the units consumed:");
    scanf("%f",&units);
    if(units<=20){
        printf("The total Cost:Rs%d",80);
    }
    else if(units>20 && units <=120){
        cost = 80 + 7.30*(units-20);
        printf("Total Cost = %f",cost);
    }
    else{
        cost = 80 + 7.30 * 100 + 9 * (units-120);
        printf("Total Cost = %f",cost);}

    getch();
    return 0 ;

}
