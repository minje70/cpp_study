#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	srand(time(NULL));
	_hitPoint = 100;
	_maxHitPoint = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = "noname";
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "<ClapTrap>\n" << _name << "이(가) 생성되었습니다.\n" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	srand(time(NULL));
	//HP
	_hitPoint = 100;
	_maxHitPoint = 100;
	//마나인듯
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = name;
	// 무기없는 공격 데미지
	_meleeAttackDamage = 30;
	// 원거리 공격 데미지
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "<ClapTrap>\n" << _name << "이(가) 생성되었습니다.\n" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clap)
{
	*this = clap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "<ClapTrap>\n" << _name << ": \"난 죽었다! 난 죽었어 오 하나님 맙소사 난 죽었어!\n\"" << _name << "이(가) 파괴되었습니다.\n" << std::endl;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &clap)
{
	if (this != &clap)
	{
		std::cout << "<ClapTrap>\n";
		std::cout << "Assignation operator called" << std::endl;
		_hitPoint = clap._hitPoint;
		_maxHitPoint = clap._maxHitPoint;
		_energyPoints = clap._energyPoints;
		_maxEnergyPoints = clap._maxEnergyPoints;
		_level = clap._level;
		_meleeAttackDamage = clap._meleeAttackDamage;
		_rangedAttackDamage = clap._rangedAttackDamage;
		_armorDamageReduction = clap._armorDamageReduction;
		_name = clap._name;
	}

	return *this;
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "<ClapTrap>\n";
	std::cout << _name << "\": 핀 잡아 당겨 던져!\"\n";
	std::cout << "<" << _name << ">가 <" << target << ">에게 원거리 공격으로 <" << _rangedAttackDamage << ">의 데미지를 입혔습니다!!!!!\n" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "<ClapTrap>\n";
	std::cout << _name << ": 죽여, 재 장전! 죽이고, 재 장전! 죽여! 재 장전!!\n";
	std::cout << "<" << _name << ">가 <" << target << ">에게 일반공격으로 <" << _meleeAttackDamage << ">의 데미지를 입혔습니다!!!!!\n" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	realDamage;

	std::cout << "<ClapTrap>\n";
	realDamage = amount - _armorDamageReduction;
	if (_hitPoint < realDamage)
		realDamage = _hitPoint;
	if (realDamage <= 0)
	{
		std::cout << _name << ": " << "하나도 안아파!!\n";
		realDamage = 0;
	}
	else
		std::cout << _name << ": " << "내 로봇 육체! 아아!!!\n";
	std::cout << _name << "이(가) " << realDamage << "의 피해를 입었습니다!!\n" << std::endl;
	_hitPoint -= realDamage;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	realAmount;

	std::cout << "<ClapTrap>\n";
	if (_maxHitPoint - _hitPoint < amount)
		realAmount = _maxHitPoint - _hitPoint;
	else
		realAmount = amount;
	if (_hitPoint >= _maxHitPoint)
		std::cout << _name << ": " << "더 이상 찰 체력이 없어!!\n";
	else
		std::cout << _name << ": " << "달콤한 생명 주스!\n";
	std::cout << _name << "이(가) " << realAmount << "만큼 회복하였습니다.\n" << std::endl; 
	_hitPoint += realAmount;
}
