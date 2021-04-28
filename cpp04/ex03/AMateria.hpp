#ifndef AMateria_HPP
# define AMateria_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
private:
	std::string		_type;
	unsigned int	_xp;
	AMateria();
public:
	AMateria(std::string const& type);
	AMateria(const AMateria &from);
	virtual ~AMateria();
	AMateria	&operator=(const AMateria &rvalue);

	const std::string&	getType() const;
	unsigned int		getXP() const;

	virtual AMateria*	clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif