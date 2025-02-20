#include<stdio.h>
#include<conio.h>


int main(){
    float b;
    char gender;
    printf("Enter the gender M or F:");
    scanf("%c",&gender);
    printf("\nEnter the Balance:");
    scanf("%f",&b);

    if(gender == 'F'){
        if(b<=5000){
                b = b*0.02 + b;
                printf("\nThe balance is : %f",b);
        }
        else{
            b = b*0.05 + b;
            printf("\nThe balance is : %f",b);
        }
    }
    else{
        b = b*0.02 + b;
        printf("\nThe balance is : %f",b);
    }
    getch();
    return 0;}
