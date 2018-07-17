#include <stdio.h>

int main()
{
    int a[5]={9,10,23,2,50};
    int large=a[0],i=0;
    for(i=0;i<5;i++)
    {
        if(a[i]>large)
        {
        large=a[i];
        }
     
    }
printf("%d",large);
    return 0;
}
