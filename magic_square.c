#include<stdio.h>
int main()
{
int size=3,i=0,j=0,sum=0;
int a[size][size];
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
scnaf("%d",&a[i][j]);
}
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
sum=sum+a[i][j];
}
int sum1=0;
for(j=0;j<size;j++)
{
for(i=0;i<size;i++)
sum1=sum1+a[i][j];
}
int sum3=0;
for(j=0;j<size;j++)
{
for(i=0;i<size;i++)
{
if(i==j)
sum1=sum1+a[i][j];
}
}
if(sum==sum1 && sum==sum3*size)
printf("Yes");
else
printf("No");
}
}



