#include <stdio.h>
 
int main(void) {
	int num,k,count;
 
	scanf("%d",&num);
 
	for(int m=0; m<num; m++)
	{
		scanf("%d",&k);
		count =0;
		for(int n=0; n<k; n++)
		{
			count = (count+0.5)*2;
		}
		printf("%d\n",count);
	}
 
	return 0;
}