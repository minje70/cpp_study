#ifndef Character_HPP
# define Character_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

class Character: public ICharacter
{
private:
	AMateria	*_inven[4];
	std::string	_name;
	Character();
public:
	Character(std::string name);
	Character(const Character &from);
	~Character();
	Character	&operator=(const Character &rvalue);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif
