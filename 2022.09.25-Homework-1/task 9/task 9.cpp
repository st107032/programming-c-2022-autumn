#include <iostream>

int main(int argc, char* argv[]) {

    int x = 0;
    std::cin >> x;
    int sq = x * x;
    int tet = sq * sq;

    std::cout <<tet + tet/x + sq + x + 1 << std::endl;

    return EXIT_SUCCESS;

}