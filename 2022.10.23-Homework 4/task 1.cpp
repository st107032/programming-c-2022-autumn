#include<iostream>

int main(int arge, int argv[])
{
	int x = 0;
	int i = 1;
	int a = 0;
	std::cin >> x;
	
	for (i; i <= x; ++i)
	{
		if (x % i == 0)
		{
			++a;
		}
	}
	std::cout << a;
	return EXIT_SUCCESS;
}