#include<stdio.h>
int main(){
    int a = 0;
    int b = 1;
    int c= 0;
    int n;
    printf("Enter the number of terms: "); scanf("%d",&n);
    for(int i = 0;i<n;i++){
        printf("%d ",a);
        c = a+b;
        b = a;
        a= c;
    }
    getch();
    return 0;



}
