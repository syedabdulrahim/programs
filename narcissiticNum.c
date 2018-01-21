#include<stdio.h>
void main()
{

  int a,b,x,r,t=0,n,i,count=0,sum=1;
  scanf("%d",&a);
  x=a;
  b=a;
  while(a>0)
  {
    n=a%10;
    count++;
    a=a/10;
  }
  while(x>0)
  {
    sum=1;
    r=x%10;
    for(i=1;i<=count;i++)
    sum=r*sum;
    printf("\n %d",sum);
    t=sum+t;
    x=x/10;
  }
  if(t==b)
  printf("Narcissistic Number");
  else
  printf("NOT Narcissistic Number")
}
