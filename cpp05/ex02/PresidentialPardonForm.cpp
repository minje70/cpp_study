#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & name)
: Form(name, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &from)
: Form(from.getName(), from.getSignedGrade(), from.getExecGrade())
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm		&PresidentialPardonForm::operator=(const PresidentialPardonForm &rvalue)
{
	Form::operator=(rvalue);
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
