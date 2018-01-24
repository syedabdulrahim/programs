#include<stdio.h>
void main()
{
int size,num,n,i=0,count1=0,count0=0;
scanf("%d",&size);
int a[size];
scanf("%d",&num);
while(num!=0)
{
n=num%10;
a[i]=n;
i++;
num=num/10;
}
for(i=0;i<size;i++)
{
  if(a[i]==1)
  count1++;
  else
  count0++;
}
if(count0>count1)
printf("\n%d",count0-count1);
else
printf("\n%d",count1-count0);

}
