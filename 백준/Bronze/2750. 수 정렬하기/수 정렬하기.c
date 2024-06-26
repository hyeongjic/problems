#include <stdio.h>
#include <math.h>

int main(void)
{
	int n,num[1000],temp;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);

	for (int i = 0; i < n; i++)
	{
		for (int k = i+1; k < n; k++) {
			if (num[i] > num[k])
			{
				temp = num[i];
				num[i] = num[k];
				num[k] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", num[i]);

	return 0;
}

