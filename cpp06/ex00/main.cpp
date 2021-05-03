#include "stringCast.hpp"

int main(int ac, char **av)
{
	StringCast *cast;

	if (ac != 2)
	{
		std::cout << "인자 수가 틀립니다." << std::endl;
		return 0;
	}
	cast = new StringCast(av[1]);
	cast->printChar();
	cast->printInt();
	return 0;
}
