#include <stdio.h>

int main(void) {
	int m, n, x, y, num, targety, count, min, tar;

	scanf("%d", &num);

	for (int k = 0; k < num; k++)
	{
		scanf("%d %d %d %d", &m, &n, &x, &y);

		if (m >= n)
			tar = m;
		else
			tar = n;
	
		min = tar;

		while(1)
		{
			if (min%m == 0 && min%n == 0)
				break;
			min += tar;
		}
		targety = x;
		targety = x % n;
        
		if(targety == 0)
            targety = n;
        
		for (count = x; count <= min; )
		{
			if (targety == y) {
				printf("%d\n", count);
				break;
			}
			else
			{
				targety = (targety+ m) % n;
				if(targety == 0)
					targety = n;
			}
			count += m;
		}
		if (count > min)
			printf("-1\n");

	}
	return 0;
}