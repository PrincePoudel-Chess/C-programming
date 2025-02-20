#include<stdio.h>
#include<conio.h>

int main(){
    int num;
    printf("Enter the terms:");
    scanf("%d",&num);

    for(int i = num;i> 0 ;i--){
        printf(" %d ",i);
    }
    for(int j = 0;j<=num;j++){
        printf("%d ",j);
    }
    getch();
    return 0;

}
