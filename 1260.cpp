// 20230204
// silver 2

#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

void DFS(int **arr, int min, int size, int st){
    //visited[v] = true
    for(int i = 0; i < size; i++){
        if(arr[i][0] == st){
            if(arr[i][1] <= min) min = arr[i][1]
        }

    }
}

int main(void){
    int N, M, V;        // vertex#, edge#, starting node#
    cin >> N >> M >> V; 

    int **graph = new int*[M];

    for(int i = 0; i < M; i++) graph[i] = new int[2];
    for(int i = 0; i < M; i++) cin >> graph[i][0] >> graph[i][1];

    DFS(graph, N, M, V);

    
    for(int i = 0; i < M; i++) delete[] graph[i];
    delete[] graph;
}