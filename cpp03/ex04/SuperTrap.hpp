#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
private:

public:
	SuperTrap();
	SuperTrap(std::string name);
	~SuperTrap();

	SuperTrap& operator = (const SuperTrap& super);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
};

#endif