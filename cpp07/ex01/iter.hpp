#ifndef iter_HPP
# define iter_HPP

#include <string>
#include <iostream>

template<typename T>
void	iter(const T* arr, const int length, void (*func)(const T& input))
{
	for (int i = 0; i < length; i++)
	{
		func(arr[i]);
	}
}

template<typename T>
void	printTemplate(const T& input)
{
	std::cout << input << std::endl;
}

#endif