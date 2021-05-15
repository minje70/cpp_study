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
	return "ERR : 입력된 숫자가 이미 존재합니다.";
}

const char* Span::OverNumberException::what() const throw()
{
	return "ERR : 숫자가 가득 찼습니다.";
}

void	Span::addNumber(int number)
{
	if (_s.size() >= N)
		throw Span::OverNumberException();
	if (_s.insert(number).second == 0)
		throw Span::SameNumException();
}
unsigned int		Span::shortestSpan()
{
	unsigned int sub;
	std::multiset<int>::iterator iter = _s.begin();// rbegin이 안되니 그거에 대해서 생각을 해봐야겠다. 여기 수정하면 대부분 해결됨.
	std::multiset<int>::iterator tmpIter;
	if (_s.size() <= 1)
		throw Span::NoSpanException();
	else
	{
		long long result = __LONG_LONG_MAX__;
		
		for (unsigned long i = 0; i < _s.size() - 1; i++)
		{
			tmpIter = iter++;
			sub = static_cast<long long>(*iter) - static_cast<long long>(*tmpIter);
			if (result > sub)
				result = sub;
		}
		return result;
	}
}

unsigned int	Span::longestSpan()
{
	if (_s.size() <= 1)
		throw Span::NoSpanException();
	else
		return static_cast<long long>(*_s.rbegin()) - static_cast<long long>(*_s.begin());
}