class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1) dfs(grid, count, i ,j);
            }
        }
        return count;
    }
    bool isWater(int i, int j, vector<vector<int>>& grid) {
        if (i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j] == 0) return true;
        return false;
    }
    int calculateEdge (int i, int j,vector<vector<int>>& grid) {
        int edge = 0;
        if (isWater(i+1, j, grid)) edge++;
        if (isWater(i, j+1, grid)) edge++;
        if (isWater(i-1, j, grid)) edge++;
        if (isWater(i, j-1, grid)) edge++;
        return edge;
    }
    void dfs (vector<vector<int>>& grid, int &count, int i, int j) {
        if (i<0||j<0) return;
        if (i>=grid.size() || j>=grid[0].size()) return;
        if (grid[i][j] != 1) return;
        grid[i][j] = 2;
        count += calculateEdge(i, j, grid);
        dfs(grid, count, i+1, j);
        dfs(grid, count, i, j+1);
        dfs(grid, count, i-1, j);
        dfs(grid, count, i, j-1);
    }
};