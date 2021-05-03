#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <exception>

int main()
{
	PresidentialPardonForm presidential("mijeong");
	RobotomyRequestForm  robo("hyeonkim");
	ShrubberyCreationForm shrubbery("kilee");
	Form *form;
	// 정상동작.
	try
	{
		Bureaucrat a("mijeong", 2);

		form = &presidential;
		std::cout << "***presiential***\n" << *form << std::endl;
		std::cout << "***mijeong***\n" << a << std::endl;

		std::cout << "***after form***\n" << *form << std::endl;
		std::cout << "***after mijeong***\n" << a << std::endl;

		std::cout << "***presidential execute***\n";
		a.signForm(*form);
		presidential.execute(a);
		a.signForm(robo);
		std::cout << std::endl;


		std::cout << "***robotomy execute***\n";
		a.signForm(robo);
		robo.execute(a);
		std::cout << std::endl;

		a.signForm(shrubbery);
		std::cout << "***shrubbery***\n";
		shrubbery.execute(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

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
