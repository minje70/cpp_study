#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("mijeong", 10);
	try
	{
		Bureaucrat b("hyeonkim", -3);
		std::cout << b;
		std::cout << "정상동작하였음." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << a << std::endl;
	try
	{
		a = Bureaucrat("mijeong2", 160);
		std::cout << a;
		std::cout << "정상동작하였음." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		a = Bureaucrat("mijeong3", 12);
		std::cout << a;
		std::cout << "정상동작하였음." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	return 0;
}
