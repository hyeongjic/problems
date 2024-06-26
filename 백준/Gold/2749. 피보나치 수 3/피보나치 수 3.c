#include <stdio.h>

int main(void) {
	long long num, n1 = 0, n2 = 1, n=1;

	scanf("%lld", &num);

	if (num > 1500000)
		num %= 1500000;

	for (long long i = 2; i<num; i++)
	{
		n1 = n2;
		n2 = n;
		n = (n1 + n2) % 1000000;

	}
	printf("%lld", n);

	return 0;
}
