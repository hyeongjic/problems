#include <stdio.h>

int main(void)
{
    int num,count = 0,plug;
    
    scanf("%d",&num);
    
    for(int i =0; i < num; i++)
    {
        scanf("%d",&plug);
        count += plug;
    }
    
    printf("%d",count - num+1);
    
    return 0;
}