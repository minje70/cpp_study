#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

void	checkException(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	checkException(grade);
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &from)
{
	*this = from;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat		&Bureaucrat::operator=(const Bureaucrat &rvalue)
{
	if (&rvalue != this)
	{
		checkException(rvalue.getGrade());
		_grade = rvalue.getGrade();
	}
	return *this;
}

const std::string&	Bureaucrat::getName() const
{
	return _name;
}

int					Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::increment()
{
	checkException(_grade - 1);
	_grade--;
}

void	Bureaucrat::decrement()
{
	checkException(_grade + 1);
	_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Grade Too hight!!\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Grade Too low!!\n");
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << "name : " << bureaucrat.getName() << "\ngrade : " << bureaucrat.getGrade() << std::endl;
	return out;
}