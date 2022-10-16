#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int m = 1;
    int a = 0;
    int b = 1;
    std::cin >> n;

    do
    {
        do
        {
            std::cout << m << " ";
            m++;
            a++;
        } while (m != n + 1);
        m = m - 1;
        while (a < n)
        {
            m = m - 1;
            std::cout << m << " ";
            a++;
        }
        std::cout << std::endl;
        b++;
        m = b;
        a = 0;
    } while (m != n + 1);

    return EXIT_SUCCESS;
}