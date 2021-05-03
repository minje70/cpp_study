#ifndef stringCast_HPP
# define stringCast_HPP

#include <string>
#include <iostream>
#include <exception>

class StringCast
{
private:
	std::string _value;
	StringCast();
public:
	StringCast(std::string value);
	StringCast(const StringCast &from);
	~StringCast();
	StringCast	&operator=(const StringCast &rvalue);

	class ImpasibleException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	std::string	getValue() const;
	void	printChar() const;
	void	printInt() const;
	void	printFloat() const;
	void	printDouble() const;
};

#endif