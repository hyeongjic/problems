#include <stdio.h>

int main(void) {
	// your code goes here
	int count=0;
	char ch;
	
	while((ch=fgetc(stdin)) != EOF )
	{
		if(ch != '\n' && ch != ' ')
		count++;
	}
	printf("%d",count);
	return 0;
}
