#include<iostream>

int main(int arge, char* argv[])
{
	int a = 0;
	std::cin >> a;

	if (a % 4 == 0)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}