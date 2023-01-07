class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // created 3 different hashsets for rows, cols and sub-grids

        unordered_set<char> col[9];
        unordered_set<char> row[9];
        unordered_set<char> sub_grid[3][3];

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char found=board[i][j];

                // if the position is not blank , we have to check
                if(found != '.'){
                    if(row[i].count(found) || col[j].count(found) || sub_grid[i/3][j/3].count(found))
                    return false;
                }

                row[i].insert(found);
                col[j].insert(found);
                sub_grid[i/3][j/3].insert(found);
            }
        }
        return true;
    }
};
