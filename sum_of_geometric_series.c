#include<stdio.h>
#include<math.h>
int main()
{
    float a,r,sum=0;
    int n;
    
    printf("first term of geometric series: ");
    scanf("%f", &a);
    
    printf("\ntotal number of terms in geometric series: ");
    scanf("%d",&n);
    
    printf("\ncommon ratio of geometric series: ");
    scanf("%f",&r);
    
    sum=(a*(1-pow(r,n+1)))/(1-r);
    
    printf("\n Sum of the series: %.2f", sum);
    
    return 0;
}
