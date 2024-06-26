#include <stdio.h>
 
int main(void) {
	// your code goes here
	char str[100];
	int check[27],i=0;
	check[0] = 0;
	for(int k=1; k<27; k++)
	{
		check[k] = -1;
	}
	scanf("%s",str);
	while(str[i]!= NULL)
	{
		if(check[str[i]-96] == -1)
			check[str[i]-96] = i;
		i++;
	}
	for(int k=1; k<27; k++)
	{
		printf("%d ",check[k]);
	}
	return 0;
}