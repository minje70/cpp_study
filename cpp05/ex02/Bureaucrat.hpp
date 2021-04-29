#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

#include <string>
#include <iostream>

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int		_grade;

	Bureaucrat();
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &from);
	~Bureaucrat();
	Bureaucrat	&operator=(const Bureaucrat &rvalue);

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

	const std::string&	getName() const;
	int					getGrade() const;
	void	increment();
	void	decrement();

	void	signForm(Form& form);
};

std::ostream& operator << (std::ostream& out, const Bureaucrat& bureaucrat);

#endif
