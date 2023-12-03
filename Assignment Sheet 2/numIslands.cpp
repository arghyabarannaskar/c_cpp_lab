#include<iostream>
#include<vector>
#include<queue>
using namespace std;

queue<pair<pair<int, int>, int>> q;

class Solution {
    bool isvalid(int row, int col, int R, int C){
        if(row>=0 && row<R && col>=0 && col<C) return true;
        return false;
    }
    
    void bfs(int row, int col, int R, int C, vector<vector<char>> &grid, vector<vector<bool>> &visited){
        int dr[] = {-1, -1, -1, 0, 0, +1, +1, +1};
        int dc[] = {-1, 0, +1, -1, +1, -1, 0, +1};
        queue<pair<int,int>> q;
        visited[row][col] = true;
        q.push({row, col});
        while(!q.empty()){
            int nrow = q.front().first;
            int ncol = q.front().second;
            cout<<"("<<nrow<<","<<ncol<<")"<<endl;
            q.pop();
            for(int i = 0; i<8; i++){ //loop to check for adjacent cells
                int adjr = nrow+dr[i];
                int adjc = ncol+dc[i];
                if(isvalid(adjr, adjc, R, C) && grid[adjr][adjc] == '1' && !visited[adjr][adjc]){
                    visited[adjr][adjc] = true;
                    q.push({adjr, adjc});
                }
            }
        }
    }
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int row = grid.size();
        int col = grid[0].size();
        int count = 0;
        vector<vector<bool>> visited(row, vector<bool>(col, false));
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                    // cout << "(" << i << ", " << j << ")" <<"->"<<grid[i][j]<<visited[i][j]<< endl;
                if(grid[i][j] == '1' & !visited[i][j]){
                    count++;
                    bfs(i, j, row, col, grid, visited);
                }
            }
        }
        return count;
    }
};

int main(){
    vector<vector<char>> grid = {{0, 1}, {1, 0}, {1, 1}, {1, 0}};
    int n = grid.size();
    int m = grid[0].size();
    for(int i =0; i<n; i++){
        cout << endl;
        for (int j = 0; j < m; j++){
            cout << grid[i][j] << " ";
        }
    }
    Solution ob;
    cout << ob.numIslands(grid) << endl;

    return 0;
}