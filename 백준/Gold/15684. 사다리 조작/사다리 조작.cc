#include <stdio.h>

using namespace std;

int map[31][11] = {0,};
int line_y[270];
int line_x[270];
int line_size=0;
int n,h,m;
int result = -1;

bool check()
{
   for(int i=1; i<=n; i++ )
   {
      int x=i;
      
      for(int k=1; k<=h; k++) 
      {
         if(map[k][x]==1)
         {
            x +=1;
         }
         else if(x-1 > 0 && map[k][x-1] == 1)
         {
            x -= 1;
         }
      }
      
   if(i != x)
      return false;
   }
   
   return true;
}


void dfs(int count, int where)
{
   if(count > 3)
      return ;
   int tempmap[h+1][n];
   
   //map저장
   for(int i=1; i<=h; i++ )
   {
      for(int k=1; k<n; k++) 
      {
         tempmap[i][k] = map[i][k];
      }
   }
   
   for(; where < line_size; where++) 
   {
   //선추가
   int x = line_x[where];
   int y = line_y[where];
   
   if(!map[y][x]) {
      
      map[y][x] = 1;
      
      if( x-1 > 0 && !map[y][x-1])
         map[y][x-1] = 2;
      if(x+1 < n && !map[y][x+1] )
         map[y][x+1] = 2;
   }
   else 
      continue;
   
   //확인
   if(check())
   {
      if(result == -1)
         result = count;
      else if(result>count )
         result = count;
   }
   else{ 
         dfs(count+1,where+1);
   }
   
   //map되돌리기
   for(int i=1; i<=h; i++ )
   {
      for(int k=1; k<n; k++) 
      {
         map[i][k] = tempmap[i][k];
      }
   }
      
   }

}


int main() {
   
   scanf("%d %d %d",&n,&m,&h);
   
   //n 가로 h 세로
   for(int i = 0; i < m; i++)
   {
      int x,y;
      
      scanf("%d %d", &y,&x);
      
      map[y][x] = 1;
      
      if( x-1 > 0 && !map[y][x-1])
         map[y][x-1] = 2;
      if(x+1 < n && !map[y][x+1])
         map[y][x+1] = 2;
         
   }
   
   //가능한 위치 넣기
   for(int i=1; i<=h; i++ )
   {
      for(int k=1; k<n; k++) 
      {
         if(!map[i][k])
         {
            line_y[line_size] = i;
            line_x[line_size] = k;
            line_size++;
         }
      }
   }

   //검사
   if(check())
      result = 0;
   else
      dfs(1,0);
   
   printf("%d\n",result);
   
   return 0;
}