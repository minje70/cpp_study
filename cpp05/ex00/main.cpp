#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("mijeong", 10);
	try
	{
		Bureaucrat b("hyeonkim", -3);
		std::cout << b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << a << std::endl;
	try
	{
		a = Bureaucrat("mijeong2", 160);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
