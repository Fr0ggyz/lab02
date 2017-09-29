#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>

int main()
{
/// 1
	{
	std::cout << "Pi=" << 3.14 << std::endl;
	}
/// 2
	{
	char c = ' ';
	std::cout << 1 << c << 13 << 49 << std::endl;
	}
/// 3
	{
	std::cout << " Write any symbol " << std::endl;
	char b;
	std::cin >> b;
	std::cout << 1 << b << 13 << b << 49 << std::endl;
	}
/// 4
	{
	std::cout << "Write 3 numbers" << std::endl;
	int a1 = 0;
	std::cin >> a1;
	int a2 = 0;
	std::cin >> a2;
	int a3 = 0;
	std::cin >> a3;
	std::string l = "  ";
	std::cout << a1 << l << a2 << l << a3 << std::endl;
	}
/// 5(1)
	{
	std::cout << " Write a " << std::endl;
	float a = 0;
	std::cin >> a;
	float x = 12 * a * a + 7 * a - 12;
	std::cout << " x = " << x << std::endl;
	}
/// 5(2)
	{
	std::cout << " Write x1 " << std::endl;
	float x = 0;
	std::cin >> x;
	float y = 3 * x * x * x + 4 * x * x - 11 * x + 1;
	std::cout << " y = " << y << std::endl;
	}
/// 6
	{
	std::cout << " Write mass " << std::endl;
	float mass = 0;
	std::cin >> mass;
	std::cout << " Write volume " << std::endl;
	float volume = 0;
	std::cin >> volume;
	float density = mass / volume;
	std::cout << " density = " << density << std::endl;
	}
/// 7
	{
	std::cout << " Write a " << std::endl;
	float a = 0;
	std::cin >> a;
	if (a == 0) {
		std::cout << " Error! Restart the programm and enter the valid number " << std::endl;
	}
	else std::cout << " Write b " << std::endl;
	float b = 0;
	std::cin >> b;
	float x = -b / a;
	std::cout << " x = " << x << std::endl;
	}
/// 8
	{
	std::cout << " Write x1 " << std::endl;
	float x1 = 0;
	std::cin >> x1;
	std::cout << " Write y1 " << std::endl;
	float y1 = 0;
	std::cin >> y1;
	std::cout << " Write x2 " << std::endl;
	float x2 = 0;
	std::cin >> x2;
	std::cout << " Write y2 " << std::endl;
	float y2 = 0;
	std::cin >> y2;
	float length = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	std::cout << " length= " << length << std::endl;
	}
/// 9
	{
	std::cout << " Write AB " << std::endl;
	float AB = 0;
	std::cin >> AB;
	std::cout << " Write CD " << std::endl;
	float CD = 0;
	std::cin >> CD;
	std::cout << " Write H " << std::endl;
	float H = 0;
	std::cin >> H;
	float side = sqrt((((CD - AB) / 2) * ((CD - AB) / 2)) + (H * H));
	float perimeter = AB + CD + 2 * side;
	std::cout << " perimeter= " << perimeter << std::endl;
	}
/// 10
	{
	std::cout << " Write outer radius " << std::endl;
	float radiusO = 0;
	std::cin >> radiusO;
	std::cout << " Write inner radius " << std::endl;
	float radiusI = 0;
	std::cin >> radiusI;
	float area = 3.14 * ((radiusO * radiusO) - (radiusI * radiusI));
	std::cout << " area = " << area << std::endl;
	}
/// 11
	{
	std::cout << " Write side of cube " << std::endl;
	float side = 0;
	std::cin >> side;
	float volume = side * side * side;
	float area = 6 * (side * side);
	std::cout << " volume= " << volume << std::endl;
	std::cout << " area= " << area << std::endl;
	}
/// 12
	{
	std::cout << " Write side of square " << std::endl;
	float side = 0;
	std::cin >> side;
	float perimeter = side * 4;
	std::cout << " perimeter= " << perimeter << std::endl;
	}
/// 13
	{
	std::cout << " Write radius " << std::endl;
	float radius = 0;
	std::cin >> radius;
	float diameter = radius * 2;
	std::cout << " diameter= " << diameter << std::endl;
	}
return 0;
}
