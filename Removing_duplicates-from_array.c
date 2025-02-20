#include<stdio.h>


int main(){
    int a[5],count;

    int n = 0;
    int m = 0;
    printf("Enter the numbers:");
    for(int i =0;i<5;i++){
        scanf("%d",&a[i]);}
    while(n<5){
            count =0;
            m=0;

            while(m<5){

                if(a[n]==a[m]){
                    count+=1;
                    if(count>1){
                        a[m]= -1;
                    }
                }
                m +=1;

            }
            n+=1;


    }
    printf("\n\n");
    for(int j=0;j<5;j++){
        printf("%d\t",a[j]);
    }
    return 0;
    getch();



}

