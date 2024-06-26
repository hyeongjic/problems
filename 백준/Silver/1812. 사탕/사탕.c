#include <stdio.h>

int main(void) {
	
	int num,sum=0,temp[999],result[999];
	
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &temp[i]);
		sum += temp[i];
	}
	sum /= 2;
	
	int i = 0;
	do {
		sum -= temp[i];
		i += 2;
	}while (i < num-2);

	result[num - 1] = sum;

	for (int k = num - 1; k > 0; k--)
		result[k - 1] = temp[k-1]-result[k];
	for (int k = 0; k < num; k++)
		printf("%d\n", result[k]);
	
	return 0;
}
