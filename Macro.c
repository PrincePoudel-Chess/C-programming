#include<stdio.h>
#define multiply(a,b)(a*b)
#define sum(a,b)(a+b)
#define div(a,b)(a/b)
#define sub(a,b)(a-b)

int main(){
    float multi,a,b;
    a= 5;b=20;
    multi = multiply(a,b);
    float s = sum(a,b);
    float d = div(a,b);
    float minus = sub(a,b);
    printf("%.2f %.2f %.2f %.2f",multi,s,d,minus);

}
