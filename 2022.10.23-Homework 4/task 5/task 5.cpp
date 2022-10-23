#include<iostream>

int main(int arge, int charv[])
{
	int n = 0;
	float sum = 1;
	std::cin >> n;

	for (int k = 1; k <= n; ++k)
	{
		int j = 1;
		for (int i = 1; i <= k; ++i)
		{
			j = j * i;
		}
		sum += (1.0 / j);
	}
	std::cout << sum;

	return EXIT_SUCCESS;
}