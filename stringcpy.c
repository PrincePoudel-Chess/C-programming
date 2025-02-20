
//Copying one string to another with and without using string functions

#include<stdio.h>


int main(){
    char str1[100],str2[100],flag[100];
    int i,l;
    int count;
    scanf("%s",str1);
    scanf("%s",str2);
    strcpy(flag,str2);
    strcpy(str2,str1);
    strcpy(str1,flag);

    //Using string function:
    printf("\n%s",str1);
    printf("\n%s",str2);

    // Without
    strcpy(flag,str2);
    strcpy(str2,str1);
    strcpy(str1,flag);


    strcpy(flag,str2);

    for(int i =0;i<strlen(str1);i++){
        str2[i] = str1[i];


    }
    for(int i =0;i<strlen(flag);i++){
        str1[i] = flag[i];


    }
    printf("\n\n%s",str1);
    printf("\n%s",str2);





    getch();
    return 0;





}
