#include <iostream>
#include <vector>

bool searchMatrix(const std::vector<std::vector<int>>& matrix, int target) {
    int ROWS = matrix.size();
    int COLS = matrix[0].size();
    int l = 0;
    int r = ROWS * COLS - 1;

    while(l <= r){
        int m = l + ((r-l)/2);
        
        int ROW = m / COLS, COL = m % COLS;
        if(matrix[ROW][COL] == target) return true;
        else if(matrix[ROW][COL] < target) l++;
        else r--;
    }
    return false;
}

int main()
{

  std::cout << searchMatrix({{1,3,5,7},{10,11,16,20},{23,30,34,60}}, 3);

}
