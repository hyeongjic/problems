#include <stdio.h>

int main() {
	int dp[1001] = {0,};
	dp[0] = 1;
	dp[1] = 1;
	for(int i=2; i< 1001; i++ ) {
		dp[i] = dp[i-2]+ dp[i-1];
		dp[i] %= 10007;
	}
	
	int n;
	scanf("%d",&n);
	printf("%d", dp[n]);
	
	return 0;
}
