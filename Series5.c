#include<stdio.h>
#include<conio.h>

int main(){
    int n= 0;
    char s[] = "Programming";
    for (int i = 11; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c", s[j+n]);
        }
        n += 1;
        printf("\n");
    }
    getch();
    return 0;



}
