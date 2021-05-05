#include "ScavTrap.hpp"


ScavTrap::ScavTrap(): ClapTrap()
{
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "<FragTrap>\n";
	std::cout << "\"나는 개 약해... 심지어 이름도없어..\n\"" << _name << "이(가) 생성되었습니다.\n" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	// 무기없는 공격 데미지
	_meleeAttackDamage = 20;
	// 원거리 공격 데미지
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "<FragTrap>\n";
	std::cout << _name << ": \"나는 개 약해...\n\"" << _name << "이(가) 생성되었습니다.\n" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scav)
{
	*this = scav;
}

ScavTrap::~ScavTrap()
{
	std::cout << "<FragTrap>\n";
	std::cout << _name << ": \"내가 죽어도 아무도 기억해주지 않겠지....\"\n" << _name << "이(가) 파괴되었습니다.\n" << std::endl;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &scav)
{
	if (this != &scav)
	{
		std::cout << "<FragTrap>\n";
		std::cout << "Assignation operator called" << std::endl;
		_hitPoint = scav._hitPoint;
		_maxHitPoint = scav._maxHitPoint;
		_energyPoints = scav._energyPoints;
		_maxEnergyPoints = scav._maxEnergyPoints;
		_level =scav._level;
		_meleeAttackDamage = scav._meleeAttackDamage;
		_rangedAttackDamage = scav._rangedAttackDamage;
		_armorDamageReduction = scav._armorDamageReduction;
		_name = scav._name;
	}

	return *this;
}

std::string	printRandomChallenge()
{
	std::string	message[5] = {"적 100명 죽이기",
							"숨어서 지켜보기",
							"적 아무도 안죽이고 승리",
							"동료 죽이기",
							"돈 100000원 모으기"};
	return (message[rand() % 5]);
}

void	ScavTrap::challengeNewcomer()
{
	std::cout << "<FragTrap>\n";
	std::cout << printRandomChallenge() << std::endl;
	std::cout << "challenge가 생성되었습니다.\n";
	std::cout << std::endl;
}