//Pattern Printing in C programming
#include<stdio.h>


int main(){
     float x=3.0;float y=12.5;float z= 523.3;float A=300.0;float  B=1200.5;float C=5300.3;

    printf("%c %2c %2s %3.2f%c %.2f%c  %3.2f%c\n",'X','y',"z=",x,'|',y,'|',z,'|');
    printf("%c %2c %2s %3.2f%c %.2f%c  %3.2f%c\n",'A','B',"C=",A,'|',B,'|',C,'|');
    printf("\n");
    printf("----------------------------------------");
    printf("\n\n");
    printf("%c %2c %2s %c%3.2f %c%.2f  %c%3.2f\n",'X','Y',"z=",'|',A,'|',B,'|',C);
    printf("%c %2c %2s %c%3.2f %c%.2f  %c%3.2f\n",'A','B',"C=",'|',A,'|',B,'|',C);


    getch();
    return 0;




}
