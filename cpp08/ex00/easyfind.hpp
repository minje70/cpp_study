#ifndef easyfind_HPP
# define easyfind_HPP

#include <string>
#include <iostream>
#include <exception>

class EmptyException : public std::exception
{
	virtual const char* what() const throw();
};

const char* EmptyException::what() const throw()
{
	return "Err : 빈 컨테이너가 들어왔습니다!!";
}

template<typename T>
typename T::iterator easyfind(T t , int i)
{
	if (t.begin() == t.end())
		throw EmptyException();
	return std::find(t.begin(), t.end(), i);
}

#endif
// find를 사용하면 쉽다.