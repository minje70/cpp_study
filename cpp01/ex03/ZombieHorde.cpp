#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{
	this->type = "default";
}

std::string	randomName()
{
	std::string	name[10] = {"hyeonski", "kilee", "mijeong", "hyeonkim", "hyopark"
							, "ekim", "hekang", "yepark", "hson", "dokang"};

	return (name[rand() % 10]);
}

ZombieHorde::ZombieHorde(int n)
{	
	this->N = n;
	this->zombies = new Zombie[n];
	this->type = "default";
	for (int i = 0; i < n; i++)
		zombies[i].setNameType(randomName(), this->type);
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->zombies;
}

void	ZombieHorde::announce()
{
	std::cout << "모두가 울부짖었다~!" << std::endl;
	for (int i = 0; i < this->N; i++)
		this->zombies[i].announce();
}
