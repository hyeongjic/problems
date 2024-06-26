#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main(void) {
	char str[100];
	int count = 0, check[26], n, flag = 0, i=0;
	
	scanf("%d", &n);

	for (int k = 0; k < n; k++)
	{
		scanf("%s", str);
		
		for (int m = 0; m<26; m++)
		check[m] = 0;
		
		while(str[i] != NULL)
		{
			if (check[str[i] - 97] == 0 && flag == 0)
			{
				if (str[i] != str[i + 1])
					check[str[i] - 97] = 1;
			}
			else
				flag = 1;
			i++;
		}
		
		if (flag == 0)
			count++;
		flag = 0;
		i=0;
	}

	printf("%d", count);

	return 0;
}
