#include<stdio.h>
int main()
{
  int num;
  printf("num: ");
  scanf("%d", &num);

  if(num%5==0 &&(num%7==0 && num%11!=0))
  {
    printf("\nYes, %d is multiple of 5, divisible by 7 and not by 11.", num);
  }
  else if(num%5!=0 &&(num%7==0 && num%11!=0))
  {
    printf("\n%d is not multiple of 5, divisible by 7 and not by 11.", num);
  }
  else if(num%5==0 &&(num%7!=0 && num%11!=0))
  {
    printf("\n%d is mutiple of 5 , not divisible by 7 and 11.", num);
  }
  else if(num%5!=0 &&(num%7!=0 && num%11==0))
  {
    printf("\n%d is divisible by 11 only.", num);
  }
  else
  {
    printf("\n%d is neither multiple of 5, nor divisible by 7 and 11.", num);
  }
}
