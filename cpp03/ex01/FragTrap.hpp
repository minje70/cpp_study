#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap
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
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& from);
	~FragTrap();

	FragTrap &operator = (const FragTrap &frag);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
};

#endif