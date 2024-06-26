#include <stdio.h>

int main(void)
{
	int red, brown, area,flag=0;
	scanf("%d %d", &red, &brown);
	area = red + brown;
	
	for (int i = 1; i <= area; i++) {
		for (int k = 1; k*i <= area; k++)
		{
			if (k*i != area)
				continue;
			else {
				if (red == (k + i) * 2 - 4) {
					printf("%d %d", k, i);
					flag = 1;
					break;
				}
			}
			
		}
		if (flag == 1)
			break;
	}


	return 0;
}
