#include<iostream>

int main(int arge, int charv[])
{
	int a = 0;
	int c = 0;
	std::cin >> a;

	for (int i = 1, j = 0; i < a; ++i)
	{
		for (int j = 0; j < i && c < a; ++j)
		{
			std::cout << i << " ";
			++c;
		}
	}
	return EXIT_SUCCESS;
}