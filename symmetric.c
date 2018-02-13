#include<stdio.h>
void main()
{
  int row,column,i=0,j=0,count=0;
  scanf("%d %d",&row,&column);
  int a[row][column];
  int transp[column][row];
  for(i=0;i<row;i++)
  for(j=0;j<column;j++)
  scanf("%d",&a[i][j]);
if(row==column)
{
for(i=0;i<row;i++)
{
  for(j=0;j<column;j++)
  {
    transp[j][i]=a[i][j];
  }
}
for(i=0;i<row;i++)
{
  for(j=0;j<column;j++)
  {
    if(a[i][j]!=transp[i][j])
    count++;
  }
}
  //printf("Symmetric");
}
else
printf("Not Symmetric");
if(count>1)
printf("not symmetric");
else
printf("Symmetric");
}
