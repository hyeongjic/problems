#include <stdio.h>

int main(void)
{
	int num,weight[50],height[50],win[50];
	
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d %d", &weight[i], &height[i]);
		win[i] = 1;
	}
	for (int i = 0; i < num; i++) {
		for (int k = i; k < num; k++)
		{
			if (i == k)
				continue;

			if (weight[i] > weight[k] && height[i] > height[k])
				win[k]++;
			else if (weight[i] < weight[k] && height[i] < height[k])
				win[i]++;
		}
	}

		for (int i = 0; i < num; i++) {
			printf("%d ", win[i]);
		}
	return 0;
}

