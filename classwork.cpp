#include <iostream>


int main()
{
	{
		std::cout << " Enter X & Y " << std::endl;
		int x = 0;
		std::cin >> x;
		int y = 0;
		std::cin >> y;
		if ((x % 2 == 1) && (y % 2 == 1))
		{
			std::cout << "  Both numbers aren't even" << std::endl;
		}
		else
		{
			std::cout << " At least one number is even " << std::endl;
		}
	}
    /// 2
		{
			std::cout << " Enter X & Y " << std::endl;
			int x = 0;
			std::cin >> x;
			int y = 0;
			std::cin >> y;
			if (((x <= 20) && (y >= 20)) || ((x >= 20) && (y <= 20)))
			{
				std::cout << " True " << std::endl;
			}
			else
			{
				std::cout << " False " << std::endl;
			}
		}
    /// 3
    {
			std::cout << " Enter X & Y " << std::endl;
			int x = 0;
			std::cin >> x;
			int y = 0;
			std::cin >> y;
			if (((x == 0) || (y == 0)))
			{
				std::cout << "At least one number is zero " << std::endl;
			}
			else
			{
				std::cout << " Both numbers aren't zero" << std::endl;
			}
    }
	/// 4
	{
		std::cout << " Enter X, Y, Z " << std::endl;
		int x = 0;
		std::cin >> x;
		int y = 0;
		std::cin >> y;
		int z = 0;
		std::cin >> z;
		if ((x < 0) && (y < 0) && (z < 0))\
		{
			std::cout << " All numbers are negative(-) " << std::endl;
		}
		else
		{
			std::cout << " At least one number is positive(+) " << std::endl;
		}
	}
	/// 5
	{
		std::cout << " Enter X, Y, Z " << std::endl;
		int x = 0;
		std::cin >> x;
		int y = 0;
		std::cin >> y;
		int z = 0;
		std::cin >> z;
		if ((x % 5 == 0) && (y % 5 != 0) && (z % 5 != 0))
		{
			std::cout << " First number is a multiple of five " << std::endl;
		}
		else if ((x % 5 != 0) && (y % 5 == 0) && (z % 5 != 0))
		{
			std::cout << " Second number is a multiple of five " << std::endl;
		}
		else
		{
			std::cout << " Third number is a multiple of five " << std::endl;
		}
	}
	/// 6
	{
		std::cout << " Enter X, Y, Z " << std::endl;
		int x = 0;
		std::cin >> x;
		int y = 0;
		std::cin >> y;
		int z = 0;
		std::cin >> z;
		if ((x >= 100) || (y >= 100) || (z >= 100))
		{
			std::cout << " At least one number more than 100 " << std::endl;
		}
		else
		{
			std::cout << " All numbers less than 100 " << std::endl;
		}
    }
	/// 7
	{
		std::cout << " Enter a, b for rook " << std::endl;
		int rook1 = 0;
		std::cin >> rook1;
		int rook2 = 0;
		std::cin >> rook2;
		///
		std::cout << " Enter c, d for enemy figure " << std::endl;
		int enemy1 = 0;
		std::cin >> enemy1;
		int enemy2 = 0;
		std::cin >> enemy2;
		if ()
	}
	return 0;
}

