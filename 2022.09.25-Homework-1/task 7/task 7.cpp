#include <iostream>

int main(int argc, char* argv[])
{ 
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b;
    c = b;
    b = a;
    a = c;
    std::cout << a << " " << b;

    return EXIT_SUCCESS;
}