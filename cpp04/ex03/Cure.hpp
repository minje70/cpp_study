#ifndef Cure_HPP
# define Cure_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
private:

public:
	Cure();
	Cure(const Cure &from);
	~Cure();
	Cure	&operator=(const Cure &rvalue);

	AMateria*	clone() const;
	void use(ICharacter& target);
};

#endif