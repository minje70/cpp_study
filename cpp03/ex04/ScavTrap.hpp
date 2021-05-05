#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& scav);
	~ScavTrap();
	
	ScavTrap &operator = (const ScavTrap &scav);
	void	challengeNewcomer();
};

#endif