#include <stdio.h>

int main()
{
    int x,y,count=0,cmp,count1=0,temp1=0;
    scanf("%d%d",&x,&y);
    int temp=y;
    int i,mul=1;
    
    
    
    while(temp!=0)
    {
        temp=temp/10;
        count++;
       // printf("\n%d",count);
    }
    for(i=0;i<count;i++)
    {
        mul=mul*10;
    }
   // printf("\n%d",mul);
    
    while(x!=0)
    {
        temp1=x%mul;
        if(temp1==y)
        {
            count1++;
        }
        x=x/10;
    }
     printf("%d",count1);

    return 0;
}
