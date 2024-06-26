#include <stdio.h>

int main(void) {
	int s,n=1;
	
	scanf("%d",&s);
	
	while(s>(3*n*(n-1)+1))
		n++;
	printf("%d",n);
	
	return 0;
}
