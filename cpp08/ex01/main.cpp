#include "span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	std::cout << "****************************************************************************************************************\n";
	std::cout << "숫자 초과 TEST\n";
	try
	{
		Span sp2 = Span(3);

		sp2.addNumber(5);
		sp2.addNumber(4);
		sp2.addNumber(3);
		sp2.addNumber(2);
		sp2.addNumber(1);
		std::cout << "longest : " << sp2.longestSpan() << "\n";
		std::cout << "shortest : " << sp2.shortestSpan() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << "****************************************************************************************************************\n";
	std::cout << "적은칸 TEST\n";
	try
	{
		Span sp3 = Span(1);

		sp3.addNumber(10);

		std::cout << "longest : " << sp3.longestSpan() << "\n";
		std::cout << "shortest : " << sp3.shortestSpan() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "****************************************************************************************************************\n";
	std::cout << "같은 숫자 TEST\n";
	try
	{
		Span sp4 = Span(5);

		sp4.addNumber(10);
		sp4.addNumber(10);

		std::cout << "longest : " << sp4.longestSpan() << "\n";
		std::cout << "shortest : " << sp4.shortestSpan() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}