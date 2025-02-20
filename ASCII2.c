#include<stdio.h>

void main(){

    char a ;
    scanf("%c",&a);

        if(a>='A'&&a<='Z'){
                printf("The character is alphabet.");}
        else if(a>='a' && a<='z'){
            printf("Character is an alphabet.");

        }
        else if(a>='0'&&a<='9'){printf("The character is a Number.");}

        else if((a>'!' && a<'/')){printf("The character is a special character.");}
        else if((a>':' && a<'"')){printf("The character is a special character.");}
        else if((a>'[' && a<'`')){printf("The character is a special character.");}
        else if((a>'{' && a<='~')){printf("The character is a special character.");}








return 0;
getch();



}
