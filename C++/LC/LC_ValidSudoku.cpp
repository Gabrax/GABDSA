#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <stack>
#include <queue>
#include <cctype>
#include <limits>





bool isValidSudoku(std::vector<std::vector<char>>& board) {
    std::unordered_map<int, std::unordered_set<int>> sqrs;
    std::unordered_map<int, std::unordered_set<int>> rows;
    std::unordered_map<int, std::unordered_set<int>> cols;

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(board[i][j] == '.'){
                continue;
            }
            if(rows[i].find(board[i][j]) != rows[i].end() ||cols[j].find(board[i][j]) != cols[j].end() || sqrs[(i / 3) * 3 + (j / 3)].find(board[i][j]) != sqrs[(i / 3) * 3 + (j / 3)].end()){
                return false;
            }
            cols[j].insert(board[i][j]);
            rows[i].insert(board[i][j]);
            sqrs[(i / 3) * 3 + (j / 3)].insert(board[i][j]);
        }
    }
    return true;
                
}

int main(){



    return 0;
}
