#include <stdio.h>
#include <math.h>

int main(void) {
	int min, max, first = 1, result=-1, sum = 0;

	scanf("%d", &min);
	scanf("%d", &max);

	for (int i = 1; i <= sqrt(max); i++)
	{

		if (i*i < min)
			continue;


		if ((i*i) <= max)
		{
			if (first) {
				result = i*i;
				first = 0;
			}
			sum += i*i;
		}


	}
	if (result == -1)
		printf("%d", result);
	else
		printf("%d\n%d", sum, result);

	return 0;
}