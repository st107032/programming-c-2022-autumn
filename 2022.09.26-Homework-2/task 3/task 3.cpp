#include<iostream>

int main(int arge, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	std::cin >> k >> m >> n;
	
	if (n % k == 0)
	{
		std::cout << n / k * 2 * m;
	}
	else
	{
		std::cout << (n / k * 2 * m) + 2 * m;
	}
	return EXIT_SUCCESS;
}