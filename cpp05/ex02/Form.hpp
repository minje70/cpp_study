#ifndef Form_HPP
# define Form_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_signedGrade;
	const int			_execGrade;
public:
	Form();
	Form(const std::string& name, const int& signedGrade, const int& execGrade);
	Form(const Form &from);
	~Form();
	Form	&operator=(const Form &rvalue);
	
	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	void	beSigned(Bureaucrat& bureaucrat);

	const std::string&	getName() const;
	int					getSignedGrade() const;
	int					getExecGrade() const;
	bool				getSigned() const;
};

std::ostream& operator << (std::ostream& out, Form& form);

#endif
