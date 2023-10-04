#include <iostream>
#include <string.h>
using namespace std;
 
int dy[4]={1,-1,0,0};
int dx[4]={0,0,1,-1};
int M,N,K;
int arr[50][50]={0};
int visited[50][50]={0};
 
void dfs(int y,int x){
    for(int i=0; i<4; i++){
        int ny=y+dy[i];
        int nx=x+dx[i];
        //배열의 인덱스를 넘지 않도록
        if(ny<0 || ny>=N || nx<0 || nx>=M)
            continue;
        //방문 x이고 배추 있다면 탐색 계속
        if(arr[ny][nx] && !visited[ny][nx]){
            visited[ny][nx]++;
            dfs(ny,nx);
        }
    }
}
 
int main(){
    int T,x,y;
    scanf("%d", &T);
    
    for(int testCase=0; testCase<T; testCase++){
        scanf("%d %d %d", &M,&N,&K);
        
        //초기화
        memset(arr, 0, sizeof(arr));
        memset(visited, 0, sizeof(visited));
        
        int ans=0; //지렁이 개수
        
        for(int i=0; i<K; i++){
            scanf("%d %d", &x,&y);
            arr[y][x]=1;
        }
        
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                if(arr[i][j] && !visited[i][j]){
                    ans++;
                    visited[i][j]++;
                    dfs(i,j);
                }
        printf("%d\n", ans);
    }
}