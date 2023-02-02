//20230201
// Silver 2

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <cstring>

using namespace std;

int M, N, K; // 배추밭의 가로(1~50), 세로(1~50), 심겨진 배추의 개수(1~2500)
bool cabbage_field[51][51];
bool visited_field[51][51];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

bool DFS(int y, int x){
    if(visited_field[y][x]) return false;
    // DFS 방문처리
    visited_field[y][x] = true;

    for(int i = 0; i < 4; i++){
        int next_x = x + dx[i];
        int next_y = y + dy[i];

        if(next_x >= 0 && next_y >= 0 && next_x < M && next_y < N && cabbage_field[next_y][next_x]) DFS(next_y, next_x);
    }
    return true;
}

int main(){
    int T; // Test Case
    cin >> T;
    int *answer = new int[T]();

    for(int tc = 0; tc < T; tc++){
        cin >> M >> N >> K;
        memset(cabbage_field, 0, sizeof(cabbage_field));
        memset(visited_field, 0, sizeof(visited_field));

        int but_cnt = 0;

        for(int i = 0; i < K; i++){
            int x = 0; int y = 0;
            cin >> x >> y;
            cabbage_field[y][x] = 1;
        }
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(cabbage_field[i][j] && !visited_field[i][j]){
                    if(DFS(i, j)) but_cnt++;
                }
            }
        }
        answer[tc] = but_cnt++;
    }

    for(int i = 0; i < T; i++){
        cout << answer[i] << endl;
    }

    delete[] answer;
}