#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

std::string	Human::identify()
{
	return this->getBrain().identify();
}

const Brain&	Human::getBrain()
{
	return (this->brain);
}