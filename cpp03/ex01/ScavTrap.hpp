#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>

class ScavTrap
{
private:
	unsigned int	_hitPoint;
	unsigned int	_maxHitPoint;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int	_level;
	std::string	_name;
	unsigned int	_meleeAttackDamage;
	unsigned int	_rangedAttackDamage;
	unsigned int	_armorDamageReduction;
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& from);
	~ScavTrap();

	ScavTrap &operator = (const ScavTrap &scav);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer();
};

#endif