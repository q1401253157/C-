//给定一个 m x n 二维字符网格 board 和一个字符串单词 word 。如果 word 存在于网格中，返回 true ；否则，返回 false 。
//单词必须按照字母顺序，通过相邻的单元格内的字母构成，其中“相邻”单元格是那些水平相邻或垂直相邻的单元格。同一个单元格内的字母不允许被重复使用。
board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0;i<board.size();i++){
            for(int j = 0; j<board[0].size();j++) l,ooooo ,                                                                                                                                                                                                                                                                                                      
                if(backtrack(board,i,j,word,0)){
                    return true;
                }
        }
        return false;

    }
private:
    bool backtrack(vector<vector<char>> &board,int i,int j,string word,int now){
        if(now == word.size())
            return true;
        if(i>=board.size()||i<0||j>=board[0].size()||j<0) return false;
        if(board[i][j]!=word[now]) return false;
        board[i][j] = '!';
        if(backtrack( board, i+1, j, word, now+1)||
        backtrack( board,i-1, j, word, now+1)||
        backtrack( board, i, j+1,word, now+1)||
        backtrack( board, i, j-1,word, now+1)) return true;

        board[i][j] = word[now];  //修改完再改回去
        return false;

    }
};