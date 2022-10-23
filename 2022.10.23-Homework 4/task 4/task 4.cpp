#include<iostream>

int main(int arge, int charv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int count = 0;
	std::cin >> a >> b >> c >> d >> e;

	for (int x = 0; x < 1001; ++x)
	{
		if ((a * x * x * x + b * x * x + c * x + d == 0) && (x - e != 0))
		{
			++count;
		}
	}
	std::cout << count << std::endl;

	return EXIT_SUCCESS;
}