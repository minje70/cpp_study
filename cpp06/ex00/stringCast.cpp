#include "stringCast.hpp"

StringCast::StringCast(std::string value)
{
	_value = value;
}

StringCast::StringCast(const StringCast &from)
{
	_value = from.getValue();
}

StringCast::~StringCast()
{
}

StringCast		&StringCast::operator=(const StringCast &rvalue)
{
	if (&rvalue != this)
		*this = rvalue;
	return *this;
}

const char* StringCast::ImpasibleException::what() const throw()
{
	return "impasible";
}

std::string		StringCast::getValue() const
{
	return _value;
}

void	StringCast::printChar() const
{
	double result;
	try
	{
		result = atof(_value.c_str());
		std::cout << "char: ";
		if (isnan(result) || result < CHAR_MIN || result > CHAR_MAX)
			throw StringCast::ImpasibleException();
		if (result == 127 || (result >= 0 && result <= 31))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "\'" << static_cast<char>(result) << "\'" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

void	StringCast::printInt() const
{
	double result;
	try
	{
		result = atof(_value.c_str());
		std::cout << "int: ";
		if (isnan(result) || result < INT_MIN || result > INT_MAX)
			throw StringCast::ImpasibleException();
		std::cout << static_cast<int>(result) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

void	StringCast::printFloat() const
{
	double result;
	try
	{
		result = atof(_value.c_str());
		std::cout << "float: ";
		if (result > __FLT_MAX__
			|| result < -__FLT_MAX__)
			throw StringCast::ImpasibleException();
		std::cout << static_cast<float>(result);
		if (static_cast<float>(result) - static_cast<int>(result) == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

void	StringCast::printDouble() const
{
	double result;
	try
	{
		result = atof(_value.c_str());
		std::cout << "double: ";
		std::cout << result;
		if (static_cast<float>(result) - static_cast<int>(result) == 0)
			std::cout << ".0";
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}
