#include<stdio.h>



int main(){
    int n,r,sum;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        r = n%10;
        sum = sum+r;
        n = (n-r)/10;
    }

    printf("\nThe sum of the digits = %d",sum);
    getch();
    return 0;




}
