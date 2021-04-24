#include "SuperTrap.hpp"

SuperTrap::SuperTrap(): FragTrap(), NinjaTrap()
{
	_hitPoint = FragTrap::_hitPoint;
	_maxHitPoint = FragTrap::_maxHitPoint;
	_energyPoints = NinjaTrap::_energyPoints;
	_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	_level = 1;
	_name = "noname";
	_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	_armorDamageReduction = FragTrap::_armorDamageReduction;
	std::cout << "<SuperTrap>\n";
	std::cout << "\"트랩 끝판왕 SuperTrap!!, 이름은 없다!!\"\n" << _name << "이(가) 생성되었습니다.\n" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
	_hitPoint = FragTrap::_hitPoint;
	_maxHitPoint = FragTrap::_maxHitPoint;
	_energyPoints = NinjaTrap::_energyPoints;
	_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	_level = 1;
	_name = name;
	_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	_armorDamageReduction = FragTrap::_armorDamageReduction;
	std::cout << "<SuperTrap>\n";
	std::cout << "\"트랩 끝판왕 SuperTrap!!\"\n" << _name << "이(가) 생성되었습니다.\n" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "<SuperTrap>\n";
	std::cout << _name << ": \"이게 죽네....\"\n" << _name << "이(가) 파괴되었습니다.\n" << std::endl;
}

SuperTrap& SuperTrap::operator = (const SuperTrap& super)
{
	std::cout << "<SuperTrap>\n";
	std::cout << "Assignation operator called" << std::endl;
	_hitPoint = super._hitPoint;
	_maxHitPoint = super._maxHitPoint;
	_energyPoints = super._energyPoints;
	_maxEnergyPoints = super._maxEnergyPoints;
	_level =super._level;
	_meleeAttackDamage = super._meleeAttackDamage;
	_rangedAttackDamage = super._rangedAttackDamage;
	_armorDamageReduction = super._armorDamageReduction;
	_name = super._name;

	return *this;
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}