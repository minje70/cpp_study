#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & name)
: Form(name, 72, 45)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &from)
:Form(from.getName(), from.getSignedGrade(), from.getExecGrade())
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm		&RobotomyRequestForm::operator=(const RobotomyRequestForm &rvalue)
{
	Form::operator=(rvalue);
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "dddddrrrrrrrriiiiiiiiiilllllllllll" << std::endl;
	if (rand() % 2)
		std::cout << executor.getName() << " has been robotomized successfully" << std::endl;
	else
		std::cout << executor.getName() << " failed to robotomized" << std::endl;
}