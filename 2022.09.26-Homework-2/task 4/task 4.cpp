#include<iostream>

int main(int arge, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	std::cin >> a >> b >> c >> d;

	if (a == 0 && b == 0)
	{
		std::cout << "INF";
	}
	if ((a != 0 && b != 0) && (((-1 * b /a)*c + d == 0) || (b % a != 0)))
	{
		std::cout << "NO";
	}
	else
	{
		std::cout << -1 * b / a;
	}
	return EXIT_SUCCESS;
}