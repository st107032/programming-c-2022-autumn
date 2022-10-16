#include<iostream>

int main(int arge, char* argv[])
{
	int n = 0;
	int m = 1;
	int a = 1;
	std::cin >> n;

	do
	{
		do
		{
			std::cout << m << " ";
			m++;
		} while (m != n + a);
		std::cout << std::endl;
		a++;
		m = a;
	} while (m != n + 1);

	return EXIT_SUCCESS;
}