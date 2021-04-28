#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(const Cure &from): AMateria(from)
{
}

Cure::~Cure()
{
}

Cure		&Cure::operator=(const Cure &rvalue)
{
	AMateria::operator= (rvalue);
	return *this;
}

AMateria*	Cure::clone() const
{
	Cure	*result = new Cure(*this);
	return result;
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
