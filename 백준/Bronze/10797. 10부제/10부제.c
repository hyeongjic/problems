#include <stdio.h>

int main(void) {
	// your code goes here
	int day,car[5],count=0;
	
	scanf("%d",&day);
	scanf("%d %d %d %d %d",&car[0],&car[1],&car[2],&car[3],&car[4]);
	for(int i=0; i<5; i++)
	{
		if(car[i]==day)
			count++;
	}
	printf("%d",count);
	return 0;
}
