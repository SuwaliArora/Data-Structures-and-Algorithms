class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()){
            return 0;
        }
        int m=grid.size(),n=grid[0].size(),days=0,cnt=0,total=0;
        queue<pair<int,int>> rotten; // pair for index of rows and column of rotten oranges
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                // count total oranges
                if(grid[i][j]!=0) total++;
                if(grid[i][j]==2) rotten.push({i,j}); // push rotten oranges in queue
            }
        }
               // R,L,D,U
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        
        // BFS iteration till queue is empty
        while(!rotten.empty()){
            int k=rotten.size();
            cnt+=k;   // count rotten oranges
            while(k--){
                int x=rotten.front().first, y=rotten.front().second;
                rotten.pop();
                // check in every direction for oranges
                for(int i=0;i<4;i++){
                    int nx=x+dx[i],ny=y+dy[i];
                    if(nx<0 || ny<0 || nx>=m || ny>=n || grid[nx][ny]!=1) continue;
                    // mark the fresh orange as rotten
                    grid[nx][ny]=2;
                    rotten.push({nx,ny});
                }
            }
            if(!rotten.empty()){
                days++;
            }
        }     
            return total==cnt ? days : -1;
        
    }
};
