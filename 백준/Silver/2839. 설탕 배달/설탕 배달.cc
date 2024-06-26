#include <stdio.h>
int main() {
    int target,result=-1,temp;
    scanf("%d",&target);
    for(int i=0; i <= target/5; i++)
    {
        if((target-5*i)%3 ==0)
        {
            temp = i+((target-5*i)/3);
            if(result == -1 || result > temp)
                result = temp;
            
        }
    }
    printf("%d",result);
    return 0;
}