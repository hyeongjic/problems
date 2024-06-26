#include <stdio.h>
 
int main(void) {
	// your code goes here
	int key[9],sum=0,rest,exclusive1,exclusive2,flag=0;
 
	for(int i=0; i < 9; i++) {
		scanf("%d",&key[i]);
		sum += key[i];
	}
	rest = sum -100;
	for(int i=0; i<9; i++)
	{
		int temp;
 
		for(int k=i+1; k<9; k++)
		{
			if(key[i] >= key[k])
			{
				temp = key[i];
				key[i] = key[k];
				key[k] = temp;
			}
		}
	}
 
	for(int i=0; i<9; i++)
	{
		int cal = rest - key[i];
		for(int k=i+1; k<9; k++)
		{
			if((cal -key[k])==0) 
			{
				exclusive1=i;
				exclusive2=k;
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
 
	for(int i=0; i < 9; i++) {
		if(exclusive1 == i || exclusive2 == i)
			continue;
		printf("%d\n",key[i]);
	}
 
 
	return 0;
}