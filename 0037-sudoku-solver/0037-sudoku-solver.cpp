class Solution {
public:
    
    bool isSafeToPlace(vector<vector<char>>& board, int row, int col, int val){
        for(int i=0;i<board.size();i++){
            if(board[row][i] == '0' + val) return false;
            
            if(board[i][col] == '0' + val) return false;
            
            if(board[3*(row/3) + i/3][3*(col/3) + i%3] == '0' + val) return false;
        
        }
        return true;
    }
    
    bool solve(vector<vector<char>>& board){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j] == '.'){
                    for(int k=1;k<=9;k++){
                        if(isSafeToPlace(board, i, j, k)){
                            board[i][j] = '0' + k;
                            
                            if(solve(board)) return true;
                            
                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};