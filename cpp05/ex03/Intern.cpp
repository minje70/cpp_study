#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &from)
{
	(void)from;
}

Intern::~Intern()
{
}

Intern        &Intern::operator=(const Intern &rvalue)
{
	if (&rvalue != this)
		*this = rvalue;
	return *this;
}

Form* createPresidential(const std::string name)
{
	return (new PresidentialPardonForm(name));
}

Form* createRobotomy(const std::string name)
{
	return (new RobotomyRequestForm(name));
}

Form* createShrubbery(const std::string name)
{
	return (new ShrubberyCreationForm(name));
}

Form* Intern::makeForm(std::string name, std::string target)
{
	Form* (*three_func[3])(const std::string name) = {createPresidential, createRobotomy, createShrubbery};
	std::string three_name[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	for (int i = 0; i < 3; i++)
	{
		if (name == three_name[i])
			return three_func[i](target);
	}
	throw Intern::MakeFailException();
	// return NULL;
}

const char* Intern::MakeFailException::what() const throw()
{
	return "Make fail!!";
}