#include<stdio.h>

// Creating the structure

struct account{
    int accno;
    char name[50];
    int age;
    float cash_amt;
};

struct bankinfo{
    char Bname[50];
    struct account person;}b1;





int main(){
    struct bankinfo b1 = {"NIC_Asia",{1,"Prince",20,10000000}};
    printf("%s",b1.person.name);





    return 0;








}
