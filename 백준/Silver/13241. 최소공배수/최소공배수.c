#include <stdio.h>

int main(void)
{
	long long int a, b,min,target;
	scanf("%lld %lld", &a, &b);
	
	if (a > b) {
		min = a;
	}
	else
		min = b;
	target = min;
	while (!(target %a == 0 && target % b == 0))
		target += min;
	printf("%lld", target);
	return 0;
}
