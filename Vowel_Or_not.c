#include<stdio.h>

int main(){
    char c;
    scanf("%c",&c);
    switch(toupper(c)){
        case 'A': printf("Vowel"); break;
        case 'E': printf("Vowel"); break;
        case 'I': printf("Vowel"); break;
        case 'O': printf("Vowel"); break;
        case 'U': printf("Vowel"); break;
        default:
            printf("Not - Vowel");
            break;}


}
