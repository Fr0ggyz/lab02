#include <iostream>
#include <math.h>

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
		else if ((x % 5 != 0) && (y % 5 != 0) && (z % 5 == 0))
		{
			std::cout << " Third number is a multiple of five " << std::endl;
		}
		else if ((x % 5 == 0) && (y % 5 == 0) && (z % 5 == 0))
		{
			std::cout << " All numbers are multiple of five " << std::endl;
		}
		else
		{
			std::cout << " All numbers aren't multiple of five " << std::endl;
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
        std::pair<int, int> rook;
        std::cin >> rook.first >> rook.second;
        std::cout << " Enter c, d for enemy figure " << std::endl;
        std::pair<int, int> enemy;
        std::cin >> enemy.first >> enemy.second;
        while ((rook.first > 8) || (rook.second > 8) || (rook.first < 0) || (rook.second < 0))
        {
            std::cout << " a and b must be >0 and <=8 " << std::endl;
            std::cin >> rook.first >> rook.second;
        }
        while ((enemy.first > 8) || (enemy.second > 8) || (enemy.first < 0) || (enemy.second < 0))
        {
            std::cout << " c and d must be > 0 and <= 8 " << std::endl;
            std::cin >> enemy.first >> enemy.second;
        }
        if ((rook.first == enemy.first) || (rook.second == enemy.second))
        {
            std::cout << " Rook can reach the enemy " << std::endl;
        }
        else
        {
            std::cout << " Rook can't reach the enemy " << std::endl;
        }
    }
	/// 8
    {
        std::cout << " Enter a, b for bishop " << std::endl;
        std::pair<int, int> bishop;
        std::cin >> bishop.first >> bishop.second;
        std::cout << " Enter c, d for enemy figure " << std::endl;
        std::pair<int, int> enemy;
        std::cin >> enemy.first >> enemy.second;
        while ((bishop.first > 8) || (bishop.second > 8) || (bishop.first < 0) || (bishop.second < 0))
        {
            std::cout << " a and b must be > 0 and <= 8 " << std::endl;
            std::cin >> bishop.first >> bishop.second;
        }
        while ((enemy.first > 8) || (enemy.second > 8) || (enemy.first < 0) || (enemy.second < 0))
        {
            std::cout << " c and d must be > 0 and <= 8 " << std::endl;
            std::cin >> enemy.first >> enemy.second;
        }
        if ((bishop.first - enemy.first) == (bishop.second - enemy.second))
        {
            std::cout << " Bishop can reach the enemy " << std::endl;
        }
        else
        {
            std::cout << " Bishop can't reach the enemy " << std::endl;
        }
    }
    /// 9
    {
        std::cout << " Enter a, b for king " << std::endl;
        std::pair<int, int> king;
        std::cin >> king.first >> king.second;
        std::cout << " Enter c, d for playing field " << std::endl;
        std::pair<int, int> field;
        std::cin >> field.first >> field.second;
        while ((king.first > 8) || (king.second > 8) || (king.first < 0) || (king.second < 0))
        {
            std::cout << " a and b must be > 0 and <= 8 " << std::endl;
            std::cin >> king.first >> king.second;
        }
        while ((field.first > 8) || (field.second > 8) || (field.first < 0) || (field.second < 0))
        {
            std::cout << " c and d must be > 0 and <= 8 " << std::endl;
            std::cin >> field.first >> field.second;
        }
        if ((((king.first - field.first) == 1) || ((king.second - field.second) == 1)) || 
            (((king.first - field.first) == -1) || ((king.second - field.second) == -1)))
        {
            std::cout << " King can reach the playing field " << std::endl;
        }
        else
        {
            std::cout << " King can't reach the playing field " << std::endl;
        }
    }
    /// 10
    {
        std::cout << " Enter a, b for queen " << std::endl;
        std::pair<int, int> queen;
        std::cin >> queen.first >> queen.second;
        std::cout << " Enter c, d for enemy figure " << std::endl;
        std::pair<int, int> enemy;
        std::cin >> enemy.first >> enemy.second;
        while ((queen.first > 8) || (queen.second > 8) || (queen.first < 0) || (queen.second < 0))
        {
            std::cout << " a and b must be > 0 and <= 8 " << std::endl;
            std::cin >> queen.first >> queen.second;
        }
        while ((enemy.first > 8) || (enemy.second > 8) || (enemy.first < 0) || (enemy.second < 0))
        {
            std::cout << " c and d must be > 0 and <= 8 " << std::endl;
            std::cin >> enemy.first >> enemy.second;
        }
        if ((queen.first - enemy.first) == (queen.second - enemy.second) || 
            ((queen.first == enemy.first) || (queen.second == enemy.second)))
        {
            std::cout << " Queen can reach the enemy " << std::endl;
        }
        else
        {
            std::cout << " Queen can't reach the enemy " << std::endl;
        }
    }
    /// 11(i)
    {
        std::cout << " Enter a, b for pawn " << std::endl;
        std::pair<int, int> pawn;
        std::cin >> pawn.first >> pawn.second;
        std::pair<int, int> field;
        std::cin >> field.first >> field.second;
        while ((pawn.first > 8) || (pawn.second > 8) || (pawn.first < 0) || (pawn.second < 0))
        {
            std::cout << " a and b must be > 0 and <= 8 " << std::endl;
            std::cin >> pawn.first >> pawn.second;
        }
        while ((field.first > 8) || (field.second > 8) || (field.first < 0) || (field.second < 0))
        {
            std::cout << " c and d must be > 0 and <= 8 " << std::endl;
            std::cin >> field.first >> field.second;
        }
        if ((((pawn.first - field.first) == 0) && ((pawn.second - field.second) == -1)) || 
            (((pawn.first - field.first) == 0) && ((pawn.second - field.second) == -2)))
        {
            std::cout << " Pawn can reach the field " << std::endl;
        }
        else
        {
            std::cout << " Pawn can't reach the field " << std::endl;
        }
    }
    /// 11(ii)
    {
        std::cout << " Enter a, b for pawn " << std::endl;
        std::pair<int, int> pawn;
        std::cin >> pawn.first >> pawn.second;
        std::pair<int, int> enemy;
        std::cin >> enemy.first >> enemy.second;
        while ((pawn.first > 8) || (pawn.second > 8) || (pawn.first < 0) || (pawn.second < 0))
        {
            std::cout << " a and b must be > 0 and <= 8 " << std::endl;
            std::cin >> pawn.first >> pawn.second;
        }
        while ((enemy.first > 8) || (enemy.second > 8) || (enemy.first < 0) || (enemy.second < 0))
        {
            std::cout << " c and d must be > 0 and <= 8 " << std::endl;
            std::cin >> enemy.first >> enemy.second;
        }
        if ((enemy.first == pawn.first + 1) && ((enemy.second == pawn.second + 1) || 
            (enemy.second == pawn.second - 1)))
        {
            std::cout << " The pawn can reach the enemy " << std::endl;
        }
        else
        {
            std::cout << " The pawn can't reach the enemy " << std::endl;
        }
    }
    /// 12
    {
        const int f = 7;
        for (int i = 1; i < 10; ++i)
        {
            std::cout << f << " * " << i << " = " << i*f << std::endl;
        }
    }
    /// 13
    {
        int m = 1;
        for (int i = 8; i < 16; ++i)
        {
            m *= i;
        }
        std::cout << "8*9*10...*15=" << m << std::endl;
    }
    /// 14
    {
        std::cout << " Enter a for multiplication a=>20" << std::endl;
        int a = 0;
        std::cin >> a;
        while ((a < 1) || (a > 20))
        {
            std::cout << " a must be between 1 and 20 " << std::endl;
            std::cin >> a;
        }
        unsigned int m = 1;
        for (unsigned int i = a; i <= 20; ++i)
        {
            m *= i;
        }
        std::cout << " multiplication from " << a << " to 20 =" << m << std::endl;
    }
    /// 15
    {
        std::cout << " Enter a multiplication from 1 to b" << std::endl;
        int b = 0;
        std::cin >> b;
        while ((b < 1) || (b > 20))
        {
            std::cout << " b must be between 1 and 20 " << std::endl;
            std::cin >> b;
        }
        unsigned int m = 1;
        for (int i = b; i > 1; --i)
        {
            m *= i;
        }
        std::cout << " Multiplication from 1 to " << b << " = " << m << std::endl;
    }
    /// 16
    {
        std::cout << " Enter a multiplication from a to b " << std::endl;
        int a = 0;
        std::cin >> a;
        int b = 0;
        std::cin >> b;
        while (a > b)
        {
            std::cout << " b > a !!! " << std::endl;
            std::cin >> a;
            std::cin >> b;
        }
        unsigned int m = 1;
        for (int i = a; i < b + 1; ++i)
        {
            m *= i;
        }
        std::cout << " Multiplication from " << a << " to " << b << " = " << m << std::endl;
    }
    return 0;
}

