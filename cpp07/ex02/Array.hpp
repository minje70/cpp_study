#ifndef Array_HPP
# define Array_HPP

#include <iostream>
#include <string>

template<typename T>
class Array
{
private:
	T* _array;
	unsigned int _length;
public:
	Array();
	Array(const unsigned int n);
	Array(const Array &from);
	~Array();
	Array	&operator=(const Array &rvalue);
	T		&operator[](unsigned int i) const;

	class ArrayException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	unsigned int size() const;
};

template<typename T>
Array<T>::Array()
{
	_array = new Array<T>;
	_length = 1;
}

template<typename T>
Array<T>::Array(const unsigned int n)
{
	_array = new T[n];
	_length = n;
}

template<typename T>
Array<T>::Array(const Array<T> &from)
{
	*this = from;
}

template<typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array<T> &rvalue)
{
	if (&rvalue != this)
	{
		_length = rvalue.size();
		_array = new T[_length];
		for (unsigned int i = 0; i < _length; i++)
		{
			_array[i] = rvalue._array[i];
		}
	}
	return *this;
}

template<typename T>
T&	Array<T>::operator[](unsigned int i) const
{
	if (i >= _length)
		throw Array<T>::ArrayException();
	return _array[i];
}

template<typename T>
unsigned int Array<T>::size() const
{
	return _length;
}

template<typename T>
const char* Array<T>::ArrayException::what() const throw()
{
	return "잘 못된 인덱스에 접근했습니다!!!";
}

#endif