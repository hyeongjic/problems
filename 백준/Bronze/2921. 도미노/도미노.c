#include <stdio.h>

int main(void) {
	
	int n,count=0;
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		count += i*(i+1)+i*(i+1)/2;
	}
	
	printf("%d",count);
	
	return 0;
}
