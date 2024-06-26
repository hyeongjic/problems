#include <stdio.h>

int main(void) {
	// your code goes here
	int top = 0 , count, check[9],tmp;
	char num;
	for (int k = 0; k < 9; k++)
		check[k] = 0;

	for (int i = 0; i < 7; i++)
	{
		scanf("%1c", &num);

		if (num == '\n')
			break;
		else
		{
			num -= 48;
			switch (num)
			{
			case 0:
				check[0]++;
				break;
			case 1:
				check[1]++;
				break;
			case 2:
				check[2]++;
				break;
			case 3:
				check[3]++;
				break;
			case 4:
				check[4]++;
				break;
			case 5:
				check[5]++;
				break;
			case 6:
				check[6]++;
				break;
			case 7:
				check[7]++;
				break;
			case 8:
				check[8]++;
				break;
			case 9:
				check[6]++;
				break;
			}
		}
	}

	for (int k = 0; k < 9; k++)
	{
		if (k == 6)
		{
			if (check[k] % 2)
				tmp = check[k] / 2 + 1;
			else
				tmp = check[k] / 2;
		}
		else
			tmp = check[k];

		if (top < tmp)
			top = tmp;
	}
	printf("%d", top);

	return 0;
}
