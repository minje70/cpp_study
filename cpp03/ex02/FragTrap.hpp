#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap: public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap& frag);
	~FragTrap();

	FragTrap &operator = (const FragTrap &frag);
	void	vaulthunter_dot_exe(std::string const & target);
};

#endif