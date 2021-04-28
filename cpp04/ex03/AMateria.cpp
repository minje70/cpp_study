#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const& type)
{
	_type = type;
	_xp = 0;
}

AMateria::AMateria(const AMateria &from)
{
	*this = from;
}

AMateria::~AMateria()
{
}

AMateria		&AMateria::operator=(const AMateria &rvalue)
{
	if (this != &rvalue)
	{
		_type = rvalue.getType();
		_xp = rvalue.getXP();
	}
	return *this;
}

const std::string&	AMateria::getType() const
{
	return _type;
}

unsigned int		AMateria::getXP() const
{
	return _xp;
}


void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}