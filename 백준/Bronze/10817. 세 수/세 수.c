#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if((a >= b && b >= c) || (a <= b && b <= c))
		printf("%d",b);
	else if((b >= a && a >= c) || (b <= a && a <= c))
		printf("%d",a);
	else if((a >= c && c >= b) || (a <= c && c <= b))
		printf("%d",c);
	
	return 0;
}