#include "iter.hpp"

int main()
{
	int	a[3] = {1, 2, 3};
	char c[5] = {'a', 'b', 'c', 'd', 'e'};
	double d[4] = {10.2, 32.2, 1.3, 503.3};

	std::cout << "**** int형 ****" << std::endl;
	iter(a, 3, printTemplate);
	std::cout << "\n**** char형 ****" << std::endl;
	iter(c, 5, printTemplate);
	std::cout << "\n**** double형 ****" << std::endl;
	iter(d, 4, printTemplate);
	return 0;
}