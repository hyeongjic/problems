#include <stdio.h>

int main(void) {
	// your code goes here
	int in,out,top=0,cur=0;
	for(int i =0; i<4; i++)
	{
		scanf("%d %d",&out,&in);
		cur += (in - out);
		if(top<=cur)
			top = cur;
	}
	printf("%d",top);
	return 0;
}
