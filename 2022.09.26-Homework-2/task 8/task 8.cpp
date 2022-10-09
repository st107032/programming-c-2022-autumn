#include<iostream>

int main(int arge, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a >> b >> c;

	if ((a + b < c) || (a + c < b) || (b + c < a))
	{
		std::cout << "impossible";
	}
	else
	{
		if ((c > a && c > b && c * c < a * a + b * b) || (a > b && a > c && a * a < c * c + b * b) || (b > a && b > c && b * b < a * a + c * c))
		{
			std::cout << "acute";
		}
		if ((c > a && c > b && c * c > a * a + b * b) || (a > b && a > c && a * a > c * c + b * b) || (b > a && b > c && b * b > a * a + c * c))
		{
			std::cout << "obtuse";
		}
		if ((c > a && c > b && c * c == a * a + b * b) || (a > b && a > c && a * a == c * c + b * b) || (b > a && b > c && b * b == a * a + c * c))
		{
			std::cout << "right";
		}
	}
	return EXIT_SUCCESS;
}