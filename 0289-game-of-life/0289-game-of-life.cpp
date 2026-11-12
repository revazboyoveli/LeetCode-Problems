class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size();
        int cols = board[0].size();
        vector<pair<int,int>> directions = {
            {-1, -1}, {0, -1}, {1, -1},
            {-1, 0}, {1,0},
            {-1, 1}, {0, 1}, {1, 1}
        };

        for(int r = 0; r < rows; r++){
            for(int c = 0; c < cols; c++){
                int nCount = 0;
                for(auto dir : directions){
                    int rr = r + dir.first;
                    int cc = c + dir.second;
                    if(rr >= 0 && rr < rows && cc >= 0 && cc < cols){
                        if(board[rr][cc] == 1 || board[rr][cc] == 2){
                            nCount++;
                        }
                    }
                }
                if(board[r][c] == 1){
                    if(nCount > 3 || nCount < 2){
                        board[r][c] = 2;
                    }
                }
                else{
                    if(nCount == 3){
                        board[r][c] = 3;
                    }
                }
            }
        }

        for(int r = 0; r < rows; r++){
            for(int c = 0; c < cols; c++){
                if(board[r][c] == 2){
                    board[r][c] = 0;
                }
                else if(board[r][c] == 3){
                    board[r][c] = 1;
                }
            }
        }
    }
};