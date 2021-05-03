#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

#include "Form.hpp"
#include <string>
#include <iostream>

class RobotomyRequestForm: public Form
{
private:
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string const & name);
	RobotomyRequestForm(const RobotomyRequestForm &from);
	~RobotomyRequestForm();
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &rvalue);

	void	execute(Bureaucrat const & executor) const;
};

#endif