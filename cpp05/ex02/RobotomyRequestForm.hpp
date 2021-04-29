#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

#include <string>
#include <iostream>

class Bureaucrat;

class RobotomyRequestForm
{
private:

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &from);
	~RobotomyRequestForm();
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &rvalue);

	void	execute(Bureaucrat const & executor) const;
};

#endif