#include <stdio.h>

int main(void) {
	// your code goes here
	int num,getnum,count=0,flag;
	
	scanf("%d",&num);
	for(int i =0; i<num; i++)
	{
		scanf("%d",&getnum);
		flag =1;
		if(getnum==1)
			continue;
		for(int k= 2; k<getnum; k++)
		{
			if(getnum %k == 0)
			{	
				flag=0;
				break;
			}
		}
		if(flag==1)
			count++;
	}
	printf("%d",count);
	return 0;
}
