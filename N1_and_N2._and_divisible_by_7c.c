#include<stdio.h>

int main(){
    int n1,n2,sum,count=0;
    printf("Enter the number range:");scanf("%d %d",&n1,&n2);
    for(int i=n1+1;i<n2;i++){
        if((i%7)== 0){
            count = count + 1;
            sum = sum + i;
        }


    }
    printf("The total numbers in between = %d\n", count);
    printf("\nThe total sum between those numbers:%d",sum);
    getch();
    return 0;
}
