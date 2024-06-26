#include <stdio.h>

int main(void)
{
	int num,sum,tar;

	for (int i = 1000; i < 10000; i++)
	{
		sum = 0;
		num = i/1000+(i- i/1000*1000)/100+(i-i/100*100)/10+i%10;
		tar = i;

		do {
			sum += tar % 12;
			tar /= 12;
		}while (tar > 11);
		sum += tar;

		if (num == sum)
		{
			tar = i;
			sum = 0;

			do {
				sum += tar % 16;
				tar /= 16;
			} while (tar > 15);
			sum += tar;

			if (sum == num)
				printf("%d\n", i);
		}
	}
	return 0;
}

