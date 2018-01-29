#include<stdio.h>
void main()
{
  int i,count1,count2;
  char a[100];
  scanf("%[^\n]s",a); // reads the whole string untill a new line is entered
  while(a[i]!='\0')
  {
    if((a[i]>=65 && a[i]<=90))
    count1++;
    else if((a[i]>=97 && a[i]<=122))
    count2++;
    i++;
  }

printf("%d %d",count1,count2);// count of number of upper and lower case letters

}
