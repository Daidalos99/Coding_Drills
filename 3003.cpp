#include <iostream>
#include <math.h>

int main(void){
    const int king = 1;
    const int queen = 1;
    const int rook = 2;
    const int bishop = 2;
    const int knight = 2;
    const int pawn = 8;
    
    int a, b, c, d, e, f;

    std::cin >> a >> b >> c >> d >> e >> f;
    std::cout << king - a << " " << queen - b << " "\
     << rook - c << " " << bishop - d << " "\
      << knight - e << " " << pawn - f << " " << std::endl;

    return 0;
}