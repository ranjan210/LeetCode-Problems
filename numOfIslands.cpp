class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
         int row = grid.size();
         int col = grid[0].size();
         cout << row << " " << col;
         int islands = 0;

         for(int i=0;i<row;i++){
             for(int j=0;j<col;j++){
                if(grid[i][j] == '1'){
                    islands++;
                    depthFirstSearch(grid,i,j,row,col);
                }
             }
         }
         return islands;
    }

    void depthFirstSearch(vector<vector<char>>& grid,int i,int j,int row,int col){
        cout << i << " " <<  j << " " <<  row << " " << col << endl;
        if((i < 0) || (j < 0) || (i >= row) || (j >= col) || (grid[i][j] == '0')){
            return;
        }
        grid[i][j] = '0';
        depthFirstSearch(grid,i+1,j,row,col);
        depthFirstSearch(grid,i-1,j,row,col);
        depthFirstSearch(grid,i,j+1,row,col);
        depthFirstSearch(grid,i,j-1,row,col);

    }
};