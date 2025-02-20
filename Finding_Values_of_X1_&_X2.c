//for the equations ax1+bx2=m and cx1+dx2=n whose solution is :X1=(md-bn)/(ad-cb) and X2=(ba-mc)/(ad-cb)
#include<stdio.h>

int main(){
    int a,b,c,d,m,n;
    float x1,x2;
    printf("Enter the values a,b,c,d,m,n:"); scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&m,&n);
    if((a*d-b*c)== 0 ){
        printf("The denominator is zero");
    }
    else{
            x1 = ((m*d)-(b*n))/((a*d)-(c*b));
            x2 = ((b*a)-(m*c))/((a*d)-(c*b));
            printf("The value of x1 and x2 : %f,%f",x1,x2);}

    getch();
    return 0;

}

