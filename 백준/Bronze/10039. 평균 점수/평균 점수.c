#include <stdio.h>
 
int main(void) {
	int temp,sum=0;
	// your code goes here
	for(int i=0; i<5; i++)
	{
		scanf("%d",&temp);
		if(temp <40)
		{
			temp=40;
		}
 
		sum += temp;
	}
 
	printf("%d",sum/5);
	return 0;
}