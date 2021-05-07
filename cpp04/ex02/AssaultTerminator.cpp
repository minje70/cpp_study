#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &from)
{
	std::cout << "* teleports from space *" << std::endl;
	*this = from;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator		&AssaultTerminator::operator=(const AssaultTerminator &rvalue)
{
	if (this != &rvalue)
		*this = rvalue;
	return *this;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	ISpaceMarine	*result;

	result = new AssaultTerminator(*this);
	return result;
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
