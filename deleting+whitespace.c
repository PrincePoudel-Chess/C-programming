//Write a program to read a sentence & delete all the white spaces.
//Replace all “.” by “:”.


#include<stdio.h>


int main(){
    char sentence[100],flag[100];
    int i,l;
    int count;
    fgets(sentence,sizeof(sentence),stdin);
    l = strlen(sentence);
    count =0;
    for(i =0;i<=l;i++){
            if(sentence[i]!= ' '){
                flag[count] = sentence[i];
                count++;

            }



     }
     printf("%s",flag);






}
