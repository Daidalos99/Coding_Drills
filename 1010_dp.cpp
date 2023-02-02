// silver 5
// dynamic programming
#include <iostream>

static int dp[30][30] = { 0, };

int combination(int n, int r){
    if(dp[n][r] != 0) return dp[n][r];
    if(r == n || r == 0){
        dp[n][r] = 1;
        return dp[n][r];
    }
    else {
        dp[n][r] = combination(n-1, r-1) + combination(n-1, r);
        return dp[n][r];
    }
}

int main(){
    int num;
    std::cin >> num;

    int a, b;
    while(num--){
        std::cin >> a >> b;
        std::cout << combination(b, a) << std::endl;
    }
    return 0;
}