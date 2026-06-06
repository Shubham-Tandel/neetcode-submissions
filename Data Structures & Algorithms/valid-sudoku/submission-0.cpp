class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> st;

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.'){
                    continue;
                }
                else{
                    if(st.count(board[i][j])){
                        return false;
                    }
                    else{
                        st.insert(board[i][j]);
                    }
                }
            }
            st.clear();
        }

        for(int j = 0; j < 9; j++){
            for(int i = 0; i < 9; i++){
                if(board[i][j] == '.'){
                    continue;
                }
                else{
                    if(st.count(board[i][j])){
                        return false;
                    }
                    else{
                        st.insert(board[i][j]);
                    }
                }
            }
            st.clear();
        }

        for (int square = 0; square < 9; square++) {
            unordered_set<char> seen;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    if (board[row][col] == '.') continue;
                    if (seen.count(board[row][col])) return false;
                    seen.insert(board[row][col]);
                }
            }
        }

        

        return true;


    }
};
