#include<iostream>

int main(int arge, char* argv[])
{
	int M = 0;
	int N = 0;
	int x = 0;
	int y = 0;
	std::cin >> M >> N >> x >> y;

	if (x - 1 > 0)
	{
		std::cout << "(" << x - 1 << "," << y << ")";
	}
	if (y - 1 > 0)
	{
		std::cout << "(" << x << "," << y - 1 << ")";
	}
	if (x + 1 <= M)
	{
		std::cout << "(" << x + 1 << "," << y << ")";
	}
	if (y + 1 <= N)
	{
		std::cout << "(" << x << "," << y + 1 << ")";
	}
	if ((x + 1 <= M)&&(y + 1 <= N))
	{
		std::cout << "(" << x + 1 << "," << y + 1 << ")";
	}
	if ((x - 1 > 0) && (y + 1 <= N))
	{
		std::cout << "(" << x - 1 << "," << y + 1 << ")";
	}
	if ((x + 1 <= M)&&(y - 1 > 0))
	{
		std::cout << "(" << x + 1 << "," << y - 1 << ")";
	}
	if ((x - 1 > 0) && (y - 1 > 0))
	{
		std::cout << "(" << x - 1 << "," << y - 1 << ")";
	}
	return EXIT_SUCCESS;
}