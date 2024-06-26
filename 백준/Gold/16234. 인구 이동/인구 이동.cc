#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <queue>

using namespace std;
int map[52][52];
int check[52][52] = {0,};
int visit[52][52] = {0,};
int up,down,n;
int sum[2001]={0,};
int seq;
int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,-1,0,1 };

queue <pair<int,int> > que;

bool move() {
   
   seq = 1;
   
   for(int i=0; i<n; i++)
   {
	  for(int k=0; k<n; k++) 
	  {
	  	
      
      
      if(!visit[i][k])
      {
      	int all_sum = 0;
         que.push({i,k});
         visit[i][k] = 1;
          
         int num=1;
         
         while(!que.empty())
         {
            auto now = que.front();
            que.pop();
            int y = now.first;
            int x = now.second;
            
            all_sum += map[y][x];
         
            for(int j=0; j<4; j++)
            {
            	 int ny = dy[j] + y;
            	 int nx = dx[j] + x;
            	 
            	  if (0 <= ny && ny < n && 0 <= nx && nx < n && !visit[ny][nx] )
            	  {
            	  	 int temp = abs(map[y][x]-map[ny][nx]);
        			 if(temp >= up && temp <= down)
        			 {
            			   que.push({ny,nx});
            			   check[ny][nx] = seq;
            			   visit[ny][nx] = 1;
            			   num++;
            		}
        
            	  }
            }
         }
         
         //마지막 시작 지도 check;
         if(num != 1) {
            sum[seq] = all_sum / num;
            check[i][k] = seq;
            seq++;
         }
        
      
      
	
      }
	  }
   }

   
   for(int i=0; i<n; i++)
   {
      for(int k=0; k<n; k++)
      {
         if(check[i][k] != 0)
         {
            map[i][k] = sum[check[i][k]];
            check[i][k] = 0;
         }
        
         visit[i][k]=0;
      }
   }

	  
	
	   
   if(seq > 1)
      return true;
   else
      return false;
}

int main() {

   int result = 0;
   
   scanf("%d %d %d",&n,&up,&down);
   
   for(int i=0; i<n; i++)
   {
      for(int k=0; k<n; k++)
      {
         scanf("%d",&map[i][k]);
      }
   }
   
   
   while(move())
   {
      result++;
   }
   
   printf("%d",result);
   


   return 0;
}