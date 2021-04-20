#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include <string>
#include "Zombie.hpp"

class ZombieHorde
{
private:
	int			N;
	std::string	type;
	Zombie		*zombies;
public:
	ZombieHorde();
	ZombieHorde(int n);
	~ZombieHorde();

	void	announce();
};

#endif
