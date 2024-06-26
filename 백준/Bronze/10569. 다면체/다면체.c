#include <stdio.h>

int main(void)
{
    int num,v,e;
    
    scanf("%d",&num);
    
    for(int i =0; i < num; i++)
    {
        scanf("%d %d",&v,&e);
        printf("%d\n",(2-v+e));
    }
    
    return 0;
}