#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <exception>

int main()
{
	PresidentialPardonForm presidential("presi");
	RobotomyRequestForm  robo("robo");
	ShrubberyCreationForm shrubbery("shru");
	Form *form;
	// 정상동작.
	try
	{
		Bureaucrat a("mijeong", 2);

		form = &presidential;
		std::cout << "***presiential***\n" << *form << std::endl;
		std::cout << "***mijeong***\n" << a << std::endl;

		std::cout << "***presidential execute***\n";
		a.signForm(*form);
		presidential.execute(a);
		std::cout << std::endl;

		std::cout << "***robotomy execute***\n";
		a.signForm(robo);
		robo.execute(a);
		std::cout << std::endl;

		std::cout << "***shrubbery execute***\n";
		a.signForm(shrubbery);
		shrubbery.execute(a);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "******************************************************************************************************" << std::endl;
	// 예외사항.
	try
	{
		Bureaucrat a("mijeong", 100);

		form = &presidential;
		std::cout << "***presiential***\n" << *form << std::endl;
		std::cout << "***mijeong***\n" << a << std::endl;

		std::cout << "***presidential execute***\n";
		a.signForm(*form);
		form->execute(a);
		a.signForm(robo);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "******************************************************************************************************" << std::endl;
	try
	{
		Bureaucrat a("mijeong", 60);

		form = &robo;
		std::cout << "***robotomy***\n" << *form << std::endl;
		std::cout << "***mijeong***\n" << a << std::endl;

		std::cout << "***robotomy execute***\n";
		a.signForm(*form);
		form->execute(a);
		a.signForm(robo);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

 	return 0;
}
