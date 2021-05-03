#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form
{
private:
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string const & name);
	ShrubberyCreationForm(const ShrubberyCreationForm &from);
	~ShrubberyCreationForm();
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rvalue);

	void	execute(Bureaucrat const & executor) const throw();
};

#endif