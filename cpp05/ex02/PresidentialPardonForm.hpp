#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string const & name);
	PresidentialPardonForm(const PresidentialPardonForm &from);
	~PresidentialPardonForm();
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &rvalue);

	void	execute(Bureaucrat const & executor) const throw();
};

#endif
