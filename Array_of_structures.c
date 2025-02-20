#include<stdio.h>


int main(){
    struct x{
        char name[50];
        int age;



    };

    struct y{
        char bname[50];
        struct x m;



    };

    struct y n[4];

    n[4]={   {"X_BANK",{"Prince",20}},
                      {"Y_BANK",{"Prince",20}
                    }};
    printf("%s",n[0].bname;);





}
