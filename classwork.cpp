#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>

int main()
{
	std::cout <<"Pi=" << 3.14 << std::endl;//print Pi
	///////////////////////////////////
	char c = ' ';
	std::cout << 1 << c << 13 << 49 << std::endl;//print 1 13 49
	/////////////////////////////////////////
	char b;
	std::cin >> b;
	std::cout << 1 << b << 13 << b << 49 << std::endl;//print 1 13 49 with symbol between
	////////////////////////////////////
	int a1, a2, a3;
	std::cout << "Write 3 numbers" << std::endl;
	std::cin >> a1;
	std::cin >> a2;
	std::cin >> a3;
	std::string l="  ";
	std::cout << a1 << l << a2 << l << a3 << std::endl;//print 3 numbers with 2 spaces
	///////////////////////////////////////////
	float a = 0;
	std::cout << "Find solution" << std::endl;
	std::cin >> a;
	float x = 12 * a*a + 7 * a - 12;
	std::cout << x=12*a*a+7*a-12= << x << std::endl;//print solution
	//////////////////////////////
	
    return 0;
}

