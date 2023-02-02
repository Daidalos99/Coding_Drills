// silver 5
// Just Combination
#include <iostream>
int main(){
    int num;
    std::cin >> num;
    while(num--){
        int a = 0, b = 0;
        std::cin >> a >> b;
        long long ans = 1;   
        int r = 1;     
    
        for(int i = b; i > b - a; i--){
            ans *= i;
            ans /= r++;
        }
        std::cout << ans << std::endl;
    }
    return 0;
}

