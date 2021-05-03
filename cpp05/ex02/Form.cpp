#include "Form.hpp"

void	checkException(int	signedGrade, int execGrade)
{
	if (signedGrade < 1)
		throw Form::GradeTooHighException();
	else if (signedGrade > 150)
		throw Form::GradeTooLowException();
	if (execGrade < 1)
		throw Form::GradeTooHighException();
	else if (execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(): _name("noname"), _signedGrade(1), _execGrade(1)
{
	_signed = false;
}

Form::Form(const Form &from)
: _name(from.getName()), _signedGrade(from.getSignedGrade()), _execGrade(from.getExecGrade())
{
	checkException(this->getSignedGrade(), this->getExecGrade());
	_signed = from.getSigned();
}

Form::Form(const std::string& name, const int& signedGrade, const int& execGrade)
: _name(name), _signedGrade(signedGrade), _execGrade(execGrade)
{
	checkException(this->getSignedGrade(), this->getExecGrade());
	_signed = false;
}

Form::~Form()
{
}

Form		&Form::operator=(const Form &rvalue)
{
	if (&rvalue != this)
	{
		checkException(rvalue.getSignedGrade(), rvalue.getExecGrade());
		_signed = rvalue.getSigned();
	}
	return *this;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Error: Grade Too hight!!\n";
}
const char* Form::GradeTooLowException::what() const throw()
{
	return "Error: Grade Too low!!\n";
}
const char* Form::CheckExecuteException::what() const throw()
{
	return "Error: Fail Execute!!\n";
}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() < _signedGrade)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

const std::string&	Form::getName() const
{
	return _name;
}

int			Form::getSignedGrade() const
{
	return _signedGrade;
}

int			Form::getExecGrade() const
{
	return _execGrade;
}

bool			Form::getSigned() const
{
	return _signed;
}

std::ostream& operator << (std::ostream& out, Form& form)
{
	return out << "name : " << form.getName() << "\nsignedGrade : " << form.getSignedGrade()
			<< "\nexecGrade : " << form.getExecGrade() << "\nsigned : " << form.getSigned() << std::endl;
}