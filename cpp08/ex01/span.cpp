#include "span.hpp"

Span::Span(unsigned int n)
{
	N = n;
}

Span::Span(const Span &from)
{
	*this = from;
}

Span::~Span()
{
}

Span		&Span::operator=(const Span &rvalue)
{
	if (&rvalue != this)
	{
		N = rvalue.N;
		_s = rvalue._s;
	}
	return *this;
}

const char* Span::NoSpanException::what() const throw()
{
	return "ERR : 숫자가 없거나 하나뿐이라 차이를 알 수 없음.";
}

const char* Span::SameNumException::what() const throw()
{
	return "ERR : 입력된 숫자가 있습니다.";
}

void	Span::addNumber(int number)
{
	try
	{
		if (_s.insert(number).second == 0)
			throw Span::SameNumException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

unsigned int		Span::shortestSpan()
{
	unsigned int sub;
	std::set<int>::iterator iter = _s.rbegin();
	try
	{
		if (_s.size() == 1 || _s.size() == 0)
			throw Span::NoSpanException();
		else
		{
			long long result = __LONG_LONG_MAX__;
			
			for (int i = 0; i < _s.size() - 1; i++)
			{
				sub = static_cast<long long>(*_s.rbegin()) - static_cast<long long>(*--_s.rbegin());
				if (result > sub)
					return sub;
			}
			
			return static_cast<long long>(*_s.rbegin()) - static_cast<long long>(*_s.begin());
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	return 0;
}

unsigned int	Span::longestSpan()
{
	try
	{
		if (_s.size() == 1 || _s.size() == 0)
			throw Span::NoSpanException();
		else
		{
			return static_cast<long long>(*_s.rbegin()) - static_cast<long long>(*_s.begin());
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	return 0;
}