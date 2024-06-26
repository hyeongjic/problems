#include <stdio.h>
#include <queue>
using namespace std;

queue<pair<int, int>> que;
queue<pair<int, int>> select_wheel;

int num, n, isrotate[1001];
int wheel[1001][8];

void rotate(int select, int dir, int *check)
{
	int temp;
	if (dir == 1) {
		temp = wheel[select][0];
		for (int i = 0, temp2; i < 7; i++)
		{
			temp2 = wheel[select][i + 1];
			wheel[select][i + 1] = temp;
			temp = temp2;
		}
		wheel[select][0] = temp;
	}
	else if(dir == -1)
	{
		temp = wheel[select][7];
		for (int i = 7, temp2; i > 0; i--)
		{
			temp2 = wheel[select][i - 1];
			wheel[select][i - 1] = temp;
			temp = temp2;
		}
		wheel[select][7] = temp;
	}
	check[select] = 1;
}



void determine() {
	for(int i=1; i<n; i++)
	{
		if (wheel[i][2] != wheel[i+1][6])
			isrotate[i] = 1;
		else
			isrotate[i] = 0;
	}
}




int main()
{
	scanf("%d",&num);
	
	for(int j =1; j<=num; j++ )
	{
		for (int i = 0; i < 8; i++)
			scanf("%1d", &wheel[j][i]);
	}
	
	
	scanf("%d", &n);

	for (int i = 0, x, y; i < n; i++) {
		scanf("%d %d", &x, &y);
		que.push({ x,y });
	}

	while (!que.empty()) {
		int check[1001] ={0,};
		auto now = que.front();
		que.pop();
		int num = now.first, dir = now.second;
		determine();
		select_wheel.push({num,dir});
		
		while(!select_wheel.empty()) {
			auto now2 = select_wheel.front();
			select_wheel.pop();
			int select = now2.first, sel_dir = now2.second;
			
			rotate(select, sel_dir, check);
			
			if(select-1 > 0 && !check[select-1]) {
				if(isrotate[select-1])
					select_wheel.push({select-1,-sel_dir});
			}
			
			if(select+1 <= n && !check[select+1]) {
				if(isrotate[select])
					select_wheel.push({select+1,-sel_dir});
			}
		}
	}
	int result=0;
	for(int i=1; i<=num; i++)
	{
		result += wheel[i][0];
	}
	printf("%d", result);

	return 0;

}
