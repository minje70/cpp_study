#include "Brain.hpp"

std::string	Brain::identify() const
{
	std::stringstream	os;
	std::string			str;

	os << this;
	os >> str;
	return str;
}

Brain::Brain()
{
	this->data = "empyty";
}

Brain::~Brain()
{
}