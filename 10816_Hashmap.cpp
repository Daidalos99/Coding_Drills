#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> map1; // 기본으로 0으로 채워지는 듯
int N, M, cardnum;

int main() {
	ios::sync_with_stdio(false); // c의 stdio와 cpp의 iostream 동기화 해제
	cin.tie(0); // cin과 cout의 묶음을 풀어줌
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> cardnum;
		map1[cardnum]++;
        // cardnum을 key로 입력받고 거기 해당하는 map1의 카운트를 올림
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> cardnum;
		cout << map1[cardnum] << " ";
        // 위의 맵에서 입력받은 cardnum key값의 value만 출력
	}
}