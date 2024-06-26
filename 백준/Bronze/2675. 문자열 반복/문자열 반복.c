#include <stdio.h>
 
int main(void) {
	// your code goes here
	char str[20];
	int num,j=0,count;
	
	scanf("%d",&num);
	
	for(int i =0; i<num; i++)
	{
		scanf("%d ",&count);
		
		scanf("%s",str);
		
	while(str[j] != NULL)
	{
		for(int k=0; k<count; k++)
			printf("%c",str[j]);
		str[j]= NULL;
		j++;
		
	}
	j=0;
	printf("\n");
	}
	return 0;
}