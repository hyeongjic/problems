#include <stdio.h>

int main(void)
{
	int num, n;
	long long int data[70];

	scanf("%d", &num);

	data[0] = 1;
	data[1] = 1;
	data[2] = 2;
	data[3] = 4;

	for (int i = 0; i < num; i++) {

		scanf("%d", &n);

		for (int i = 4; i <= n; i++)
		{
			data[i] = data[i - 4] + data[i - 3] + data[i - 2] + data[i - 1];
		}
		printf("%lld\n", data[n]);

	}
	return 0;
}