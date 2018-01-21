#include<stdio.h>
void main()
{
  float b,balance;
  int a;
  scanf("%d %f",&a,&b);
  if((a%5==0)&&(b>a))
  {
    balance=b-a-0.5;
    printf("%0.2f",balance);
  }
  else
  printf("\n%f",b);


}
