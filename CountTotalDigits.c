#include<stdio.h>


int main(){
    int n,r,count;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        r = n%10;
        count +=1;
        n = (n-r)/10;
    }

    printf("\nThe digits = %d",count);
    getch();
    return 0;



}
