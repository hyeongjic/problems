#include <stdio.h>


int main(void) {
   int n=0;
   int target;
   int max;
   int dp[1001] ={0,};
   
   scanf("%d",&n);
   
   for(int i=0; i<n; i++)
   {
      scanf("%d",&target);
      
      if(i == 0) {
    	dp[target] = 1;
    	max = target;
      }
      else
      {
      	if(target > max) {
      		max = target;
      	}
      
      	int temp = 0;
      	for(int j=1; j<target; j++)
      	{
      		if(dp[j] > temp)
      			temp = dp[j];
      	}
      	dp[target] = temp + 1;
      }
   }
   
   int result = 0;
   for(int i=1; i<=max; i++)
   {
   		if(dp[i] > result)
      		result = dp[i];
   }
   printf("%d",result);

   return 0;
}