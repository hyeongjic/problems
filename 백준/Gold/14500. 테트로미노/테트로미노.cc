#include <stdio.h>

#define RIGHT 0
#define DOWN 1
#define LEFT 2
#define UP 3

int n,m;
int top=0;
int start_y,start_x;
int map[500][500];

void dfs(int y, int x, int count, int before_dir, int sum)
{
	sum += map[y][x]; 
	
	if(count == 3)
	{
		if(sum > top)
			top = sum;
		return ;
	}
	
	//ㅗ자일때
   if(count == 2)
   {
      if(y-start_y == 2 && x==start_x){
         if(x-1 >= 0)
            dfs(y-1,x-1,count+1,4,sum);
         if(x+1 <m)
            dfs(y-1,x+1,count+1,4,sum);
      }
      
      if(x-start_x == 2 && y==start_y){
   
         if(y-1 >= 0)
            dfs(y-1,x-1,count+1,4,sum);
         if(y+1 < n)
            dfs(y+1,x-1,count+1,4,sum);
      }
   }

	//오른쪽 갈때 
	if(before_dir != LEFT && x+1 < m)
	{
		dfs(y,x+1,count+1,RIGHT,sum);
	}
	
	//아래쪽 갈때
	if(before_dir != UP && y+1 < n)
	{
		dfs(y+1,x,count+1,DOWN,sum);
	}
	
	//왼쪽 갈때
	if(before_dir != RIGHT && x-1 >= 0)
	{
		dfs(y,x-1,count+1,LEFT,sum);
	}
	
	//위쪽 갈때
	if(before_dir != DOWN && y-1 >= 0)
	{
		dfs(y-1,x,count+1,UP,sum);
	}
	
	return ;
}

int main(void) {
	
	scanf("%d %d",&n,&m);
	
	//map 데이터
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			scanf("%d",&map[i][j]);
		}
	}

	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			start_y=i;
			start_x=j;
			
			dfs(i,j,0,4,0);
		}
		
	}
	
	printf("%d",top);
	
	return 0;
}
