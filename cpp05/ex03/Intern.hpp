#ifndef Intern_HPP
# define Intern_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	/* data */
public:
	Intern();
	Intern(const Intern &from);
	~Intern();
	Intern	&operator=(const Intern &rvalue);

	class MakeFailException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	Form* makeForm(std::string name, std::string target);
};

#endif