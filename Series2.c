#include<stdio.h>
int main(){
    int n,i;
    int sum = 1;
    printf("How many terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum + (i-1)*i;

    }
    printf("\n The Sum is: %d",sum);
    getch();
    return 0;}
