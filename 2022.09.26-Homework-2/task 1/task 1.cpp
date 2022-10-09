#include<iostream>

int main(int arge, char* argv[])
{
	int a = 0;
	std::cin >> a;

	if (a / 100 != 0)
	{
		switch (a / 100)
		{
		case 1:
			std::cout << "sto";
			break;
		case 2:
			std::cout << "dvesti";
			break;
		case 3:
			std::cout << "tristo";
			break;
		case 4:
			std::cout << "chetiristo";
			break;
		case 5:
			std::cout << "pyat'sot";
			break;
		case 6:
			std::cout << "shest'sot";
			break;
		case 7:
			std::cout << "sem'sot";
			break;
		case 8:
			std::cout << "vosem'sot";
			break;
		case 9:
			std::cout << "devyat'sot";
			break;
		}
	}
	if (a / 10 % 10 != 0 && (a % 100 < 11 || a % 100 > 19))
	{
		switch (a / 10 % 10)
		{
		case 1:
			std::cout << " desyat'";
			break;
		case 2:
			std::cout << " dvadcat'";
			break;
		case 3:
			std::cout << " tridcat'";
			break;
		case 4:
			std::cout << " sorok";
			break;
		case 5:
			std::cout << " pyat'desyat";
			break;
		case 6:
			std::cout << " shest'desyat";
			break;
		case 7:
			std::cout << " sem'desyat";
			break;
		case 8:
			std::cout << " vosem'desyat";
			break;
		case 9:
			std::cout << " devyanosto";
			break;
		}
	}
	if (a / 10 % 10 != 0 && (a % 100 > 10 && a % 100 < 20))
	{
		switch (a / 10 % 10)
		{
		case 1:
			std::cout << " odinnadcat'";
			break;
		case 2:
			std::cout << " dvenadcat'";
			break;
		case 3:
			std::cout << " trinadcat'";
			break;
		case 4:
			std::cout << " chetirnadcat'";
			break;
		case 5:
			std::cout << " pyatnadcat'";
			break;
		case 6:
			std::cout << " shestnadcat'";
			break;
		case 7:
			std::cout << " semnadcat'";
			break;
		case 8:
			std::cout << " vosemnadcat'";
			break;
		case 9:
			std::cout << " devytnadcat'";
			break;
		}
	}
	if (a % 10 != 0 && (!(a / 10 % 10 != 0 && (a % 100 > 10 && a % 100 < 20))))
	{
		switch (a % 10)
		{
		case 1:
			std::cout << " odin";
			break;
		case 2:
			std::cout << " dva";
			break;
		case 3:
			std::cout << " tri";
			break;
		case 4:
			std::cout << " chetire";
			break;
		case 5:
			std::cout << " pyat'";
			break;
		case 6:
			std::cout << " shest'";
			break;
		case 7:
			std::cout << " sem'";
			break;
		case 8:
			std::cout << " vosem'";
			break;
		case 9:
			std::cout << " devyt'";
			break;
		}
	}
	if (a % 100 < 11 || a % 100 > 19)
	{
		switch (a % 10)
		{
		case 1:
			std::cout << " banan";
			break;
		case 2:
		case 3:
		case 4:
			std::cout << " banana";
			break;
		default:
			std::cout << " bananov";
			break;
		}
	}
	if (a / 10 % 10 == 1 && (a % 100 > 10 && a % 100 < 20))
	{
		std::cout << " bananov";
	}
	return EXIT_SUCCESS;
}