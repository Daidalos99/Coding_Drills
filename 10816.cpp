#include <iostream>
#include <map>

using namespace std;

int main(void){
    int N, M; // N은 상근이가 가지고 있는 숫자카드의 개수, M은 구해야할 개수

    cin >> N;
    int *Narr = new int[N];
    for(int i = 0; i < N; i++){
        cin >> Narr[i];
    }

    cin >> M;
    int *Marr = new int[M];
    int *numarr = new int[M];
    for(int i = 0; i < M; i++){
        numarr[i] = 0;
    }

    for(int i = 0; i < M; i++){
        cin >> Marr[i];
    }

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(Narr[j]==Marr[i]) numarr[i]++;
        }
    }

    for(int i = 0; i < M; i++){
        cout << numarr[i] << " ";
    }
    cout << endl;

    return 0;
}