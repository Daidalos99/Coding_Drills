// 20230206
// warm-up

#include <iostream>

using namespace std;

int main(void){
    double a, b;
    cin >> a >> b;
    cout.precision(10);     // 전체 실수를 10자리까지 표현하겠다.
    cout << fixed;          // 소수 부분만 10자리까지 표시하겠다.
    cout << a / b << endl;

    return 0;
}