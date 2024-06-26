#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,d,count;
	for(int i=0; i<3; i++)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		count = a+b+c+d;
		switch(count)
		{
			case 0:
				printf("D\n");
				break;
			case 1:
				printf("C\n");
				break;
			case 2:
				printf("B\n");
				break;
			case 3:
				printf("A\n");
				break;
			case 4:
				printf("E\n");
				break;	
		}
	}
	return 0;
}
