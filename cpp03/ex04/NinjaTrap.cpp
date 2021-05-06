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
	std::cout << "\"이름 없는 닌자 등장!!\"\n" << _name << "이(가) 생성되었습니다.\n" << std::endl;
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
	std::cout << "\"닌자 등장!!\"\n" << _name << "이(가) 생성되었습니다.\n" << std::endl;
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

void	NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << _name << ": 핀 잡아 당겨 던져!\n";
	std::cout << "<" << _name << ">가 <" << target << ">에게 원거리 공격으로 <" << _rangedAttackDamage << ">의 데미지를 입혔습니다!!!!!\n" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << _name << ": 죽여, 재 장전! 죽이고, 재 장전! 죽여! 재 장전!!\n";
	std::cout << "<" << _name << ">가 <" << target << ">에게 일반공격으로 <" << _meleeAttackDamage << ">의 데미지를 입혔습니다!!!!!\n" << std::endl;
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap& ninja)
{
	std::cout << "<ninja>를 인자로 가지는 ninjashoebox!!!\n" << ninja.getName() << std::endl << std::endl;;
}

void	NinjaTrap::ninjaShoebox(const ClapTrap& clap)
{
	std::cout << "<clap>을 인자로 가지는 ninjashoebox!!!\n" << clap.getName() << std::endl << std::endl;;
}

void	NinjaTrap::ninjaShoebox(const FragTrap& frag)
{
	std::cout << "<frag>를 인자로 가지는 ninjashoebox!!!\n" << frag.getName() << std::endl << std::endl;;
}

void	NinjaTrap::ninjaShoebox(const ScavTrap& scav)
{
	std::cout << "<scav>를 인자로 가지는 ninjashoebox!!!\n" << scav.getName() << std::endl << std::endl;;
}
