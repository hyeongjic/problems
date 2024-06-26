#include <stdio.h>

int main(void) {

	int r, c, a, b, flag, line = 1;

	scanf("%d %d", &r, &c);
	scanf("%d %d", &a, &b);

	for (int k = 1; k <= r*a; k++)
	{
		flag = 1;
		if (line == 1)
		{
			for (int i = 1; i <= c*b; i++)
			{
				if (flag == 1) {
					printf("X");
				}
				else {
					printf(".");
				}

				if (i % b == 0) {
					if (flag)
						flag = 0;
					else
						flag = 1;
				}
			}
			printf("\n");
		}
		else
		{
			for (int i = 1; i <= c*b; i++)
			{
				if (flag == 1) {
					printf(".");
				}
				else {
					printf("X");
				}
				if (i % b == 0) {
					if (flag)
						flag = 0;
					else
						flag = 1;
				}
			}
			printf("\n");
		}

		if (k % a == 0 )
		{
			if (line)
				line = 0;
			else
				line = 1;
		}
	}

	return 0;
}
