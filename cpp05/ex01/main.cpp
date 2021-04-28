#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <exception>

int main()
{
	Form form("form", 3, 4);
	Bureaucrat a("mijeong", 2);

	std::cout << "***form***\n" << form << std::endl;
	std::cout << "***mijeong***\n" << a << std::endl;

	a.signForm(form);
	std::cout << "***after form***\n" << form << std::endl;
	std::cout << "***after mijeong***\n" << a << std::endl;
	return 0;
}
