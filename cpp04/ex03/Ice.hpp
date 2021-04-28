#ifndef Ice_HPP
# define Ice_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
private:

public:
	Ice();
	Ice(const Ice &from);
	~Ice();
	Ice	&operator=(const Ice &rvalue);

	AMateria*	clone() const;
	void use(ICharacter& target);
};

#endif