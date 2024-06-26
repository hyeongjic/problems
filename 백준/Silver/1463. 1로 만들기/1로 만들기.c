#include <stdio.h>

int main() {
	// your code goes here
	int dp[1000001] = {0,};
	dp[1] = 0;
	for(int i=2; i< 1000001; i++ )
	{
		int min;
		int temp;
		
		if(i-1 >= 1)
			min = dp[i-1] + 1;
		
		if(i%2 == 0) {
			temp = dp[i/2]+1;
			if(min > temp )
				min = temp;
		}
		
		if(i % 3 == 0)
		{
			temp = dp[i/3]+1;
			if(min > temp)
				min = temp;
		}
		
		dp[i] = min;
	}
	
	int n;
	scanf("%d",&n);
	printf("%d",dp[n]);
	
	
	return 0;
}
