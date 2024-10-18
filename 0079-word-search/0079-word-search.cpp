class Solution {
public:

    bool isValid(vector<vector<char>> &board, int n, int m, int i, int j, char ch, vector<vector<int>>& solution){
        return (i>=0 && i<n && j>=0 && j<m && ch==board[i][j] && !solution[i][j]);
    }
    
    bool wordSearch(vector<vector<char>> &board, int n, int m, int i, int j, string &word, int index, vector<vector<int>>& solution){
        if(i>=0 && i<n && j>=0 && j<m && index==word.length()-1 && word[index]==board[i][j] && !solution[i][j]){
            solution[i][j] = 1;
            return true;
        }
        
        if(isValid(board, n, m, i, j, word[index], solution)){
            solution[i][j] = 1;
            
            if(wordSearch(board, n, m, i+1, j, word, index+1, solution)) return true;
            
            else if(wordSearch(board, n, m, i, j+1, word, index+1, solution)) return true;
            
            else if(wordSearch(board, n, m, i-1, j, word, index+1, solution)) return true;
            
            else if(wordSearch(board, n, m, i, j-1, word, index+1, solution)) return true;
            
            solution[i][j] = 0;
            return false;
        }
        else return false;
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> solution(n, vector<int>(m, 0));        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(word[0] == board[i][j]){
                    if(wordSearch(board, n, m, i, j,  word, 0, solution)){
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};