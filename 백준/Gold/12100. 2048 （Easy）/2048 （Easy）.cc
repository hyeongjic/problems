#include <stdio.h>
#include <queue>
using namespace std;

int n;
int map[21][21];//0~19
int top=0;
queue <pair<int,int>> que;

void move(int y, int x){
	
		if(map[y][x])
		{
			if(!que.empty())
			{
				auto now = que.front();
				que.pop();
				int my = now.first;
				int mx = now.second;
		
				map[my][mx] = map[y][x];
				map[y][x] = 0;
				que.push({y,x});
			}
		}
		else if(map[y][x] == 0)
		{
			que.push({y,x});
		}
}



void dfs(int count){
	
	if(count == 6) {
		return;
	}
	
	int copymap[20][20];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			copymap[i][j] = map[i][j]; 
		}
	}

	//위쪽  
	for(int j=0; j<n; j++) 
	{
		//합치기 위에꺼부터 확인 y가 0~n-1까지
		for(int i=0; i<n-1; i++) 
		{
			if(map[i][j]) {
				for(int k=i+1; k<n; k++){
					if(map[k][j]) {
						if(map[i][j] == map[k][j]) {
							map[i][j] += map[k][j];
							map[k][j] = 0;
							
							if(map[i][j] > top)
								top = map[i][j];
							
							break;
						}
						else
							break;
					}
				}
			}
		}
		//이동  
		for(int i=0; i<n; i++)
		{
			move(i, j);
		}
		//queue 비우기
		while(!que.empty())
			que.pop();
		
	}
	
	dfs(count+1);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			map[i][j] = copymap[i][j]; 
		}
	}
	
	//오른쪽
	for(int i = 0; i<n; i++)
	{
		//합치기 오른쪽꺼부터 확인 x가 n-1 ~ 1까지
		for(int j=n-1; j > 0; j--)
		{
			if(map[i][j]) {
				for(int k = j-1; k >=0; k--) {
					if(map[i][k] ) {
						if(map[i][j] == map[i][k])	{
							map[i][j] += map[i][k];
							map[i][k] = 0;
						
							if(map[i][j] > top) 
								top = map[i][j];
							
							break;
						}
						else
							break;
					}
				}
			}
		}
		//이동 
		for(int j=n-1; j >= 0; j--)
		{
			
			move(i, j);
		}
		//queue 비우기
		while(!que.empty())
			que.pop();
		
	}
	
	dfs(count+1);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			map[i][j] = copymap[i][j]; 
		}
	}
	
	//아래 아래꺼부터 n-1 ~ 1까지
	for(int j=0; j<n; j++)
	{
		//합치기
		for(int i= n-1; i > 0; i--)
		{
			if(map[i][j]){
				for(int k=i-1; k>=0; k--) {
					if(map[k][j]) {
						if(map[i][j] == map[k][j]) {
							map[i][j] += map[k][j];
							map[k][j] = 0;
						
							if(map[i][j] > top)
								top = map[i][j];
							
							break;
						}
						else
							break;
					}
				}
			}
		}
		//이동
		for(int i = n-1; i >= 0; i--)
		{
			move(i, j);
		}
		//queue 비우기
		while(!que.empty())
			que.pop();
		
	}
	
	dfs(count+1);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			map[i][j] = copymap[i][j]; 
		}
	}
	
	//왼
	for(int i = 0; i<n; i++)
	{
		//합치기
		for(int j=0; j < n-1; j++)
		{
			if(map[i][j]) {
				for(int k=j+1; k<n; k++) {
					if(map[i][k]) {
						if(map[i][j] == map[i][k]) {
							map[i][j] += map[i][k];
							map[i][k] = 0;
						
							if(map[i][j] > top)
								top = map[i][j];
							
							break;
						}
						else
							break;
					}
				}
			}
		}
		//이동 
		for(int j = 0; j < n; j++)
		{
			move(i, j);
		}
		//queue 비우기
		while(!que.empty())
			que.pop();
	}
	
	
	
	dfs(count+1);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			map[i][j] = copymap[i][j]; 
		}
	}
	
	return;
}


int main(void) {
	
	int count=0;
	
	scanf("%d",&n);
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d",&map[i][j]);
			if(map[i][j] > top)
				top = map[i][j];
		}
	}
	
	dfs(count+1);

	printf("%d",top);
	
	return 0;
}

