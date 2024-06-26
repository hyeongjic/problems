#include <stdio.h>

int main(void) {

	
	int first, second, third, fourth, fifth, l;
	int check[10000];
	for (int k = 0; k<10000; k++)
		check[k] = 1;
	for (int i = 0; i < 10000; i++)
	{
		if (check[i] == 0)
			continue;
		l = i+1;
	
		while (l <= 10000) {
			first = l / 1000;
			second = l % 1000 / 100;
			third = l % 100 / 10;
			fourth = l % 10;
			l = l + first + second + third + fourth;

			if (l <= 10000 && l != i)
				check[l - 1] = 0;
		}
	}
	for (int i = 0; i < 10000; i++)
	{
		if (check[i] == 1)
			printf("%d\n", i + 1);
	}
	
	return 0;
}
