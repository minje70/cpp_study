#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(): ClapTrap()
{
	_hitPoint = 60;
	_maxHitPoint = 60;
	_maxEnergyPoints = 120;
	_energyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << "<NinjaTrap>\n";
	std::cout << "\"이름 없는 닌자 등장!!\n\"" << _name << "이(가) 생성되었습니다.\n" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	_hitPoint = 60;
	_maxHitPoint = 60;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	_name = name;
	std::cout << "<NinjaTrap>\n";
	std::cout << "\"닌자 등장!!\n\"" << _name << "이(가) 생성되었습니다.\n" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& ninja)
{
	*this = ninja;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "<NinjaTrap>\n";
	std::cout << _name << ": \"닌자 주금....\"\n" << _name << "이(가) 파괴되었습니다.\n" << std::endl;
}

NinjaTrap& NinjaTrap::operator = (const NinjaTrap& ninja)
{
	if (this != &ninja)
	{
		std::cout << "<NinjaTrap>\n";
		std::cout << "Assignation operator called" << std::endl;
		_hitPoint = ninja._hitPoint;
		_maxHitPoint = ninja._maxHitPoint;
		_energyPoints = ninja._energyPoints;
		_maxEnergyPoints = ninja._maxEnergyPoints;
		_level =ninja._level;
		_meleeAttackDamage = ninja._meleeAttackDamage;
		_rangedAttackDamage = ninja._rangedAttackDamage;
		_armorDamageReduction = ninja._armorDamageReduction;
		_name = ninja._name;
	}

	return *this;
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap& ninja)
{
	std::cout << "<ninja>를 인자로 가지는 ninjashoebox!!!" << ninja.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(const ClapTrap& clap)
{
	std::cout << "<clap>을 인자로 가지는 ninjashoebox!!!" << clap.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(const FragTrap& frag)
{
	std::cout << "<frag>를 인자로 가지는 ninjashoebox!!!" << frag.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(const ScavTrap& scav)
{
	std::cout << "<scav>를 인자로 가지는 ninjashoebox!!!" << scav.getName() << std::endl;
}

void	NinjaTrap::putStatus()
{
	std::cout << "name : " << this->_name << std::endl;
	std::cout << "maxHitPoint : " << this->_maxHitPoint << std::endl;
	std::cout << "energyPoint : " << this->_energyPoints << std::endl;
	std::cout << "maxEnergyPoints : " << this->_maxEnergyPoints << std::endl;
	std::cout << "meleeAttackDamage : " << this->_meleeAttackDamage << std::endl;
	std::cout << std::endl;
}
