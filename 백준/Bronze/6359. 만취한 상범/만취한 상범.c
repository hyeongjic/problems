#include <stdio.h>

int main(void) {

	int num, room, check[100], count;

	scanf("%d", &num);

	for (int i = 0; i< num; i++)
	{
		scanf("%d", &room);

		count = 0;

		for (int k = 1; k <= room; k++)
		{
			if (k == 1)
			{
				for (int m = 0; m<room; m++)
					check[m] = 1;
			}
			else {
				for (int m = 0; m<room; m++) {
					if ((m + 1) % k == 0) {
						if (check[m])
							check[m] = 0;
						else
							check[m] = 1;
					}
				}
			}
		}

		for (int m = 0; m<room; m++) {
			if (check[m])
				count++;
		}
		printf("%d\n", count);
	}


	return 0;
}
