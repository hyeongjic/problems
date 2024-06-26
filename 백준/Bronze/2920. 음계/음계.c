#include <stdio.h>

int main(void) {
	// your code goes here
	int check=0,sound;
	
	for (int i = 0; i<8; i++)
	{
		scanf("%d ", &sound);
		
		if(i==0)
		{
			if(sound == (i+1))
				check = 1;
			else if(sound == (8-i))
				check = 2;
			else
				break;
		}
		else{
			if(sound == (i+1) && check==1)
				continue;
			else if(sound == (8-i) && check == 2)
				continue;
			else
			{
				check=0;
				break;
			}
		}
	}
		if(check==0)
			printf("mixed");
		else if(check==1)
			printf("ascending");
		else
			printf("descending");
	return 0;
}
