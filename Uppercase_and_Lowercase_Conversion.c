#include<stdio.h>
#include<conio.h>

int main(){
    char a;
    printf("Enter the character:");
    scanf("%c",&a);
    if(a>65 && a<90){
        printf("The number is in uppercase.");
    }
    else if(a>=97 && a<=122){
        printf("The character is in a Lowercase.");
    }
    else{printf("The character is not an alphabet.");}
    getch();
    return 0;
}
