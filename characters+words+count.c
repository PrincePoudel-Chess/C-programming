//Write a program to read a sentence and count the number of
//characters & words in that sentence.


#include<stdio.h>


int main(){
    char sentence[100];
    int i,l;
    int count;
    fgets(sentence,sizeof(sentence),stdin);
    l = strlen(sentence);
    count = 0  ;
    for(i =0;i<l;i++){
        if(sentence[i]!=' ' && (sentence[i+1] == ' ' || sentence[i + 1] == '\0')){
                count++;

        }


    }
    printf("%d",count);
    return 0;
    getch();



}
