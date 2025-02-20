#include<stdio.h>
#include<conio.h>



int main(){
    int sum = 0,*psum =&sum,m,n,*pm=&m,*pn = &n;
    float avg, *pavg = &avg;
    int temp;

    printf("Enter the two numbers:");
    scanf("%d",pm);
    scanf("%d",pn);
    if(*pm>*pn){
        temp = *pm;
        *pm = *pn;
        *pn = temp;}
    int range = *pn-*pn;
    while(*pn>=*pm){
        *psum = *psum + *pn;
        if(*pn%2==0){printf("%d is Even.\n",*pn);}
        *pn -=1;


    }
    printf("\nSum = %d",*psum);
    *pavg = (float)(*psum)/range;
    printf("\n avg = %f",*pavg);
    return 0;
    getch();

}





