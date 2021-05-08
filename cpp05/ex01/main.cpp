#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <exception>

int main()
{
	// 정상동작.
	try
	{
		Form form("form", 3, 4);
		Bureaucrat a("mijeong", 2);

		std::cout << "***form***\n" << form << std::endl;
		std::cout << "***mijeong***\n" << a << std::endl;

		a.signForm(form);
		std::cout << "***after form***\n" << form << std::endl;
		std::cout << "***after mijeong***\n" << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << "*****************************************************" << std::endl;
	// 예외사항. 
	try
	{
		Form form("form", 130, -1);
		Bureaucrat a("mijeong", 2);

		std::cout << "***form***\n" << form << std::endl;
		std::cout << "***mijeong***\n" << a << std::endl;

		a.signForm(form);
		std::cout << "***after form***\n" << form << std::endl;
		std::cout << "***after mijeong***\n" << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "*****************************************************" << std::endl;
	try
	{
		Form form("form", 50, 30);
		Bureaucrat a("mijeong", 100);

		std::cout << "***form***\n" << form << std::endl;
		std::cout << "***mijeong***\n" << a << std::endl;

		a.signForm(form);
		std::cout << "***after form***\n" << form << std::endl;
		std::cout << "***after mijeong***\n" << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	return 0;
}
