#include "Zombie.hpp"

Zombie::Zombie()
{
	this->announce();
}

Zombie::~Zombie()
{
}

void	Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type;
	std::cout <<  ")> Braiiiiiiinnnssss..." << std::endl;
}
