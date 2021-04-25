#include "Character.hpp"

Character::Character()
{
}

Character::Character(const std::string& name)
{
	_name = name;
	_actionPoint = 40;
	_weapon = NULL;
}

Character::Character(const Character& character)
{
	*this = character;
}

Character::~Character()
{
}

Character& Character::operator = (const Character& character)
{
	_name = character.getName();
	_actionPoint = character.getAP();
	*_weapon = *character.getAWeapon();
}