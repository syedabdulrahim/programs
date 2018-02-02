#include<stdio.h>
void main()
{
  int i=0,temp,j=0,size;
  scanf("%d",&size);
  int a[size];
  for(i=0;i<size;i++)
  scanf("%d",&a[i]);
  for(i=0;i<size-1;i++)
  {
    for(j=0;j<size-i-1;j++)
    {

      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }

  for(i=0;i<size;i++)
  printf("%d",a[i]);


}
