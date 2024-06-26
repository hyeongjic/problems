#include <stdio.h>

int main(void) {
	// your code goes here
	int n[5];
	scanf("%d %d %d %d %d",&n[0],&n[1],&n[2],&n[3],&n[4]);
	
	printf("%d",(n[0]*n[0]+n[1]*n[1]+n[2]*n[2]+n[3]*n[3]+n[4]*n[4])%10);
	return 0;
}
