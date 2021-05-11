#include "span.hpp"

int main()
{
	// Span sp = Span(5);

	// sp.addNumber(5);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);

	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	
	std::set<int> s;
	s.insert(3);
	s.insert(1);
	s.insert(2);
	std::multiset<int>::iterator iter = s.begin();
	for (int i = 0; i < 3; i++)
	{
		std::cout << static_cast<long long>(*iter) << "\n";
		iter++;
	}
	
}