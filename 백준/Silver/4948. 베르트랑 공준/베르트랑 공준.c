#include <stdio.h>
#include <math.h>

int main(void) {
	// your code goes here
	int num, count=0,flag,flag1;

	while (1)
	{
		scanf("%d", &num);
		if (num == 0)
			break;

		count = 0;

		for (int i = num+1; i <= num * 2; i++) {

			flag = 1;
		
			for (int k = 2; k <= sqrt(i); k++)
			{
				if (i % k == 0 && i != k) {
					flag = 0;
					break;
				}
			}
			if (flag)
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
}