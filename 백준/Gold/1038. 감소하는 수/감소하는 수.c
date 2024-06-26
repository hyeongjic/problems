#include <stdio.h>
#include <math.h>

int main(void)
{
	int num, flag = 0, flag2, count = 1;
	long long temp, n = 9, a[11];
	scanf("%d", &num);

	if (num <= 9) {
		printf("%d", num);
		return 0;
	}

	for (long long i = 10; i <= 9876543210; i++) {

		if (pow(10, count + 1) == i)
			count++;

		temp = i;
		flag2 = 1;

		for (int k = 0; k <= count; k++)
		{
			a[k] = temp / (long long)pow(10, count - k);
			temp -= a[k] * (long long)pow(10, count - k);

			if (k >= 1)
			{
				if (a[k] >= a[k - 1])
				{
					long long temp2 = 0;
					flag2 = 0;
					a[k-1]++;
					for (int m = 0; m < k; m++) {
						temp2 += a[m]*(long long)pow(10, count-m);
					}
					i = temp2-1;
					break;
				}
			}
		}

		if (flag2)
			n++;

		if (n == num) {
			flag = 1;
			n = i;
			break;
		}
	}
	if (flag)
		printf("%lld", n);
	else
		printf("-1");
	return 0;
}

