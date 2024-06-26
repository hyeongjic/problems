#include <stdio.h>

int main(void)
{
    int num,leg,chicken;
    
    scanf("%d",&num);
    
    for(int i =0; i < num; i++)
    {
        scanf("%d %d",&leg,&chicken);
        
        printf("%d %d\n",chicken*2-leg,chicken-(chicken*2-leg));
    }
    
    return 0;
}