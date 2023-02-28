// 20230204
// silver 3

#include <iostream>
#include <map>

using namespace std;

// map에 입력받은 문자열과 true를 입력해주고, 입력받은 문자열이 map에 존재하면
// 문자열의 개수를 +1
// map: 왼쪽이 key값, 오른쪽이 value값
// key와 value를 가지는 노드를 생성하여 정렬된 트리형태로 저장해둠
map<string, bool> map1;
int N, M;
string str;
int num = 0;

int main(void){
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> str;
        // key:value 쌍으로 이루어진 map에 pair들을 넣어줌
        map1.insert(pair<string, bool>(str, true));
    }
    for(int i = 0; i < M; i++){
        cin >> str;
        if(map1[str]==true) num++;
    }
    cout << num << endl;
}