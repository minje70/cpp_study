#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(const std::string &name);
	~FragTrap();

	FragTrap &operator = (const FragTrap &frag);
	void	vaulthunter_dot_exe(std::string const & target);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
};

#endif