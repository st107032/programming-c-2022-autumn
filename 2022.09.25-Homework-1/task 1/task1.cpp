﻿#include<iostream>

int main(int arge, char* argv[])
{
	int n = 0;
	std::cin >> n;
	std::cout << "The next number for the number " << n << " is " << n + 1 << ".";
	std::cout << "The previous number for the number " << n << " is " << n - 1 << ".";

	return EXIT_SUCCESS;
}