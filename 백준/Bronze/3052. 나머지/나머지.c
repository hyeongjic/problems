#include <stdio.h>

int main(){
    
    int target;
    int count=0;
    int check[42] = {0,};
    int temp;
    
    for(int i =0; i<10; i++)
    {
        scanf("%d",&target);
        temp = target % 42;
        if(!check[temp]) {
            count++;
            check[temp] = 1;
        }
    }
    printf("%d",count);
    
    return 0;
}