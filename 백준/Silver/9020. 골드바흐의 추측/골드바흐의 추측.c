#include <stdio.h>

int main(void) {
	// your code goes here
	int num, even, count = 0, div, flag;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &even);

		div = even / 2;

		for (int m = 0; m <= div; m++)
		{
			flag = 1;
			for (int k = 2; k < div - m; k++)
			{
				if ((div - m) % k == 0) {
					flag = 0;
					break;
				}
			}
			for (int k = 2; k < div+m; k++)
			{
				if ((div + m) % k == 0) {
					flag = 0;
					break;
				}
			}

			if (flag) {
				printf("%d %d\n", div - m, div + m);
				break;
			}
		}
	}

	return 0;
}
