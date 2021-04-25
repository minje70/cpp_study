#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaaargh" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& superMutant): Enemy(superMutant)
{
}

SuperMutant& SuperMutant::operator = (const SuperMutant& superMutant)
{
	Enemy::operator= (superMutant);
	return *this;
}

void	SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
	if (this->getHP() <= 0)
		std::cout << "Aaaargh" << std::endl;
}
