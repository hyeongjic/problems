#include <stdio.h>

int main(void) {
	int s,n=1;
	
	scanf("%d",&s);

	while(s>n*(n+1)/2)
		n++;
	s -= n*(n-1)/2;
	if(n%2)
		printf("%d/%d",n-s+1,s);
	else
		printf("%d/%d",s,n-s+1);
	
	return 0;
}
