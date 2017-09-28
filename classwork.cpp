#include <iostream>
#include <string>
#include <math.h>

int main()
{
std::cout << "Pi=" << 3.14 << std::endl;
///
/// 2
char c = ' ';
std::cout << 1 << c << 13 << 49 << std::endl;
///
/// 3
char b;
std::cin >> b;
std::cout << 1 << b << 13 << b << 49 << std::endl;
///
/// 4
int a1, a2, a3;
std::cout << " Write 3 numbers " << std::endl;
std::cin >> a1;
std::cin >> a2;
std::cin >> a3;
std::string f = "  ";
std::cout << a1 << f << a2 << f << a3 << std::endl;
return 0;
}

