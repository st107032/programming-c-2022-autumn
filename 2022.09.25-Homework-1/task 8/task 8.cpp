#include <iostream>

int main(int argc, char* argv[]) {

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;

    std::cin >> a >> b >> c >> d >> e >> f;
    std::cout << d * 3600 + e * 60 + f - 3600 * a - 60 * b - c << std::endl;

    return EXIT_SUCCESS;

}