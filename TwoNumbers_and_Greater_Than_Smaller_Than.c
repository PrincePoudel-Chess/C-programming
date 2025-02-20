# include<stdio.h>
#include<conio.h>




int main(){
    float n1,n2;
    printf("Enter two numbers:");
    scanf("%f %f",&n1,&n2);
    float product = n1 * n2;
    if(product>n1 && product>n2){
            printf("The product %f is greater than both the numbers %f and %f",product,n1,n2);
    }
    else if(product<n1 && product<n2){
        printf("The product %f is smaller than both the numbers %f and %f",product,n1,n2);
    }
    else if(product>n1 && product<n2){
            printf("The product %f is greater than %f and smaller than %f:",product,n1,n2);
    }
    else{
        printf("The product %f is greater than %f and smaller than %f:",product,n2,n1);
    }
    getch();
    return 0;
}
