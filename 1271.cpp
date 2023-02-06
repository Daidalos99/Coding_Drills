// 20230204
// gold 5

#include <iostream>
#include <string>

int main(void){
    std::string token;
    std::string n = "";
    std::string m = "";
    
    while (true) {
		getline(std::cin, token);		
	}

    std::cin >> n >> m;
    std::cout << n / m << std::endl;
    std::cout << n % m << std::endl;

    return 0;
}