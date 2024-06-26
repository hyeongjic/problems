#include <stdio.h>

int main(void) {

	int stick = 64,target,num=0,cur=0;

	scanf("%d", &target);
	
	if (target == 64)
	{
		printf("1");
		return 0;
	}

	while (1) {
		if (target - stick >= 0) {
			target -= stick;
			num++;
		}
		if(stick != 1)
			stick /= 2;

		if (target == 0)
			break;
	}
	printf("%d", num);
	return 0;
}
