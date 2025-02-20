#include<stdio.h>

void func1(void){
    static int i = 5;
    i++;
    printf("funct1-value of i is:%d\n",i);


}

void func2(void){
    int i = 5;
    i++;
    printf("func2-value of i is:%d\n",i);

}


int main(){
    int count;
    count = 5;
    while(count--){
        func1();
    }
    printf("\n\n");
    count = 5;
    while(count--){
        func2();}



    return 0;






}
