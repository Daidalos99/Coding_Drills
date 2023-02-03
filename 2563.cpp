// 20230204
// silver 5

#include <iostream>

using namespace std;

int main(void){
    int drawing_paper_width = 100;  // 도화지 가로
    int drawing_paper_length = 100; // 도화지 세로
    int colored_paper_width = 10;   // 색종이 가로
    int colored_paper_length = 10;  // 색종이 세로
    int colored_paper_num = 0;      // 색종이 장수   
    int black_area = 0; 
    int x = 0, y = 0;

    cin >> colored_paper_num;

    bool ** drawing_paper = new bool*[drawing_paper_length];

    for(int i = 0; i < drawing_paper_length; i++){
        drawing_paper[i] = new bool[drawing_paper_width];
    }

    for(int i = 0; i < drawing_paper_length; i++){
        for(int j = 0; j < drawing_paper_width; j++){
            drawing_paper[i][j] = false;
        }
    }

    for(int i = 0; i < colored_paper_num; i++){
        cin >> x >> y;
        for(int m = y; m < y + 10; m++){
            for(int n = x; n < x + 10; n++){
                drawing_paper[m][n] = true;
            }
        }
    }

    for(int i = 0; i < drawing_paper_length; i++){
        for(int j = 0; j < drawing_paper_width; j++){
            if(drawing_paper[i][j] == true) black_area++;
        }
    }
    cout << black_area << endl;

    return 0;
}