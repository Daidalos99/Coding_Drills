// 20230204
// silver 3

#include <iostream>
#include <map>

using namespace std;

// map에 입력받은 문자열과 true를 입력해주고, 입력받은 문자열이 map에 존재하면
// 문자열의 개수를 +1
map<string, bool> m;
int N, M;
string str;
int answer = 0;

int main(void){
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> str;
        m.insert(pair<string, bool>(str, true));
    }
    for(int i = 0; i < M; i++){
        cin >> str;
        if(m[str]==true) answer++;
    }
    cout << answer << endl;
}