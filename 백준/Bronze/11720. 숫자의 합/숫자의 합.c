#include <stdio.h>

int main(void) {
	int a,b,sum=0;
	scanf("%d",&a);
	for(int i=0; i<a; i++)
	{
		scanf("%1d",&b);
		sum +=b;
	}
	printf("%d",sum);
	return 0;
}
