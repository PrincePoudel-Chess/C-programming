
#include<stdio.h>



int main(){
    int n,r,rev;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        r = n%10;
        rev = rev*10+r;
        n = (n-r)/10;
    }

    printf("\nThe reverse of the number = %d",rev);
    getch();
    return 0;




}
