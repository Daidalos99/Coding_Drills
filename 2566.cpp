// 20230204
// bronze 3

#include <iostream>

using namespace std;

int main(void){
    const int row = 9;
    const int col = 9;
    int grid[row][col];
    int max = 0;
    int max_row = 0, max_col = 0;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> grid[i][j];
        }
        cout << endl;
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(grid[i][j] >= max){
                max = grid[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    cout << max << endl;
    cout << max_row + 1 << " " << max_col + 1 << endl;
}