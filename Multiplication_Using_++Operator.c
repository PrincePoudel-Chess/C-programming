// C program to multiply two numbers using plus operator


#include <stdio.h>
#include <stdlib.h>

int multi(int m,int n){
    int result;

    for(int i = 1;i<=n;i++){

        result += m;
    }
    return result;


}


int main()
{

    int a,b;
    printf("Enter the Two_Numbers:\n");
    scanf("%d %d",&a,&b);
    printf("The Multiplication is %d",multi(a,b));
    getch();
    return 0;

}
