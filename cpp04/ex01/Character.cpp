#include "Character.hpp"

Character::Character()
{
}

Character::Character(const std::string& name)
{
	_name = name;
	_actionPoint = 40;
	_maxAP = 40;
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
	return *this;
}

void	Character::recoverAP()
{
	_actionPoint += 10;
	if (_actionPoint > _maxAP)
	{
		_actionPoint = _maxAP;
		std::cout << "풀 피!!" << std::endl;
		return ;
	}
	std::cout << "AP 10 회복" << std::endl;
}
void	Character::equip(AWeapon* weapon)
{
	_weapon = weapon;
}

void	Character::attack(Enemy* enemy)
{
	if (_weapon == NULL)
		return ;
	if (_weapon->getAPCost() > _actionPoint)
		std::cout << "AP가 부족합니다." << std::endl;
	else
	{
		std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
		_actionPoint -= _weapon->getAPCost();
	}
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string const	Character::getName() const
{
	return _name;
}

int		Character::getAP() const
{
	return _actionPoint;
}

AWeapon	*Character::getAWeapon() const
{
	return _weapon;
}

std::ostream&	operator << (std::ostream& out, const Character& character)
{
	if (character.getAWeapon() == NULL)
		out << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	else
		out << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getAWeapon()->getName() << std::endl;
	return out;
}
