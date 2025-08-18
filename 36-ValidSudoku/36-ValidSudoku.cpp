// Last updated: 8/18/2025, 9:56:08 AM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // we have to check in each row , in each column and in each squrire(1-9)

        int n = board.size();
        // lets first see in each row 
        // we know in duplicate check , best is to use unordered set 
        for(int i=0;i<9;i++){
            unordered_set<char>s;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(s.find(board[i][j]) != s.end()) return false;
                s.insert(board[i][j]);
            }
        }
        cout<<true<<endl;

        // lets find see in each column 
        for(int col=0;col<9;col++){
            unordered_set<char>s;
            for(int row=0;row<9;row++){
                if(board[row][col]=='.') continue;
                if(s.find(board[row][col]) != s.end()) return false;
                s.insert(board[row][col]);
            }
        }
        cout<<true<<endl;

        // now we have to look in each squire 
        for(int squire = 0;squire<9;squire++){
            // row -> 0 to 3 col -> 0 to 3 
            unordered_set<char>s;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    int row = i + (squire/3)*3; 
                    int col = j + (squire%3)*3;
                    if(board[row][col]=='.') continue;
                    if(s.find(board[row][col]) != s.end()) return false;
                    s.insert(board[row][col]);
                }
            }
        }
        return true;

        // row -> will be 
        // 0 0 0 0 0 0 0 0 0 for squire {0 1 2} + i-> {1 2 3}
        // 0 0 0 0 0 0 0 0 0
        // 0 0 0 0 0 0 0 0 0
        // 0 0 0 0 0 0 0 0 0 for squire {3 4 5} + i-> {1 2 3}
        // 0 0 0 0 0 0 0 0 0
        // 0 0 0 0 0 0 0 0 0
        // 0 0 0 0 0 0 0 0 0 for squire {6 7 8} + i-> {1 2 3} 
        // 0 0 0 0 0 0 0 0 0
        // 0 0 0 0 0 0 0 0 0

    }
};