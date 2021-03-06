#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& RadScorpion): Enemy(RadScorpion)
{
}

RadScorpion& RadScorpion::operator = (const RadScorpion& RadScorpion)
{
	Enemy::operator= (RadScorpion);
	return *this;
}

void	RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}
