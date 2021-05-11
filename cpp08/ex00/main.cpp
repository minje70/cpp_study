#include <vector>
#include <deque>
#include <list>
#include "easyfind.hpp"


int main()
{
	try
	{
		std::vector<int> vec;
		vec.push_back(3);
		vec.push_back(5);
		vec.push_back(10);
		vec.push_back(1);
		
		std::cout << *easyfind(vec, 3) << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		std::vector<int> vec;
		std::vector<int> vec2;
		vec.push_back(3);
		vec.push_back(5);
		vec.push_back(10);
		vec.push_back(1);
		
		std::cout << *easyfind(vec2, 3) << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		std::list<int> li;
		li.push_back(3);
		li.push_back(5);
		li.push_back(10);
		li.push_back(1);
		
		std::cout << *easyfind(li, 3) << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		std::list<int> li;
		std::list<int> li2;
		li.push_back(3);
		li.push_back(5);
		li.push_back(10);
		li.push_back(1);
		
		std::cout << *easyfind(li2, 3) << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	try
	{
		std::deque<int> de;
		std::deque<int> de2;
		de.push_back(3);
		de.push_back(5);
		de.push_back(10);
		de.push_back(1);
		
		std::cout << *easyfind(de, 3) << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	try
	{
		std::deque<int> de;
		std::deque<int> de2;
		de.push_back(3);
		de.push_back(5);
		de.push_back(10);
		de.push_back(1);
		
		std::cout << *easyfind(de2, 3) << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	return 0;
}
