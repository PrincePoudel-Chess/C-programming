#include<stdio.h>
#include<conio.h>

void main(){
    int n;
    printf("Enter the end of the series:");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        printf(" %d/%d ",i,(i+1));}
    getch();
    return 0;


}
