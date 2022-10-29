// Author - Nitin Chauhan

class Solution {
public:
    int dfs(vector<vector<int>> &grid, int i, int j){
        
        if(i>=grid.size() || j>=grid[0].size() || i<0 || j<0 || grid[i][j]==0)
            return 0;
        grid[i][j] = 0;
        
        return 1+(dfs(grid, i+1,j)+
                 dfs(grid,i,j+1)+
                 dfs(grid,i-1,j)+
                 dfs(grid,i,j-1));
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int ans = 0;
        for(int i=0; i <grid.size(); i++)
            for(int j=0; j<grid[i].size(); j++)
                if(grid[i][j] == 1)
                    ans = max(ans, dfs(grid,i,j));
        
        return ans;
    }
};