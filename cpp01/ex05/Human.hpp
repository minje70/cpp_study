#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"
#include <sstream>

class Human
{
private:
	const Brain brain;
public:
	Human();
	~Human();

	std::string		identify();
	const Brain&	getBrain();
};

#endif
