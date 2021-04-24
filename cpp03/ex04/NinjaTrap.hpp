#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: public virtual ClapTrap
{
private:

public:
	NinjaTrap();
	NinjaTrap(std::string name);
	~NinjaTrap();

	NinjaTrap& operator = (const NinjaTrap& ninja);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);

	void	ninjaShoebox(const NinjaTrap& ninja);
	void	ninjaShoebox(const ClapTrap& clap);
	void	ninjaShoebox(const FragTrap& frag);
	void	ninjaShoebox(const ScavTrap& scav);
};

#endif