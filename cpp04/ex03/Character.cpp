#include "Character.hpp"

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
	{
		_inven[i] = NULL;
	}
}

Character::Character(const Character &from)
{
	_name = from.getName();
	for (int i = 0; i < 4; i++)
	{
		if (from._inven[i] != NULL)
			_inven[i] = from._inven[i]->clone();
		else
			_inven[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete _inven[i];
		_inven[i] = NULL;
	}
}

Character	&Character::operator=(const Character &rvalue)
{
	_name = rvalue.getName();
	if (&rvalue != this)
	{
		for (int i = 0; i < 4; i++)
		{
			if (rvalue._inven[i] != NULL)
				_inven[i] = rvalue._inven[i]->clone();
			else
				_inven[i] = NULL;
		}
	}
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inven[i] == NULL)
		{
			_inven[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >=0 && idx < 4)
	{
		if (_inven[idx] != NULL)
			_inven[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (_inven[idx] != NULL)
		{
			_inven[idx]->use(target);
		}
	}
}
