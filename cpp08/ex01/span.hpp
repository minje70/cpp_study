#ifndef span_HPP
# define span_HPP

#include <exception>
#include <set>
#include <iostream>

class Span
{
private:
	unsigned int N;
	std::set<int> _s;
	Span();
public:
	Span(unsigned int n);
	Span(const Span &from);
	~Span();
	Span	&operator=(const Span &rvalue);

	class NoSpanException: public std::exception
	{
		virtual const char * what() const throw();
	};
	class SameNumException: public std::exception
	{
		virtual const char * what() const throw();
	};


	void addNumber(int number);
	unsigned int shortestSpan();
	unsigned int longestSpan();
};

#endif