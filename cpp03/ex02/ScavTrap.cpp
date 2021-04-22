#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
	srand(time(NULL));
	_hitPoint = 100;
	_maxHitPoint = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = "noname";
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "\"나는 개 약해... 심지어 이름도없어..\n\"" << _name << "이(가) 생성되었습니다.\n" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	srand(time(NULL));
	//HP
	_hitPoint = 100;
	_maxHitPoint = 100;
	//마나인듯
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = name;
	// 무기없는 공격 데미지
	_meleeAttackDamage = 20;
	// 원거리 공격 데미지
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << _name << ": \"나는 개 약해...\n\"" << _name << "이(가) 생성되었습니다.\n" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name << ": \"내가 죽어도 아무도 기억해주지 않겠지....\"\n" << _name << "이(가) 파괴되었습니다.\n" << std::endl;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &scav)
{
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

	return *this;
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << _name << ": \"수류탄 굴러갑니다..\"\n";
	std::cout << "<" << _name << ">가 <" << target << ">에게 원거리 공격으로 <" << _rangedAttackDamage << ">의 데미지를 입혔습니다!!!!!\n" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << _name << ": \"공격해도 될까요....\"\n";
	std::cout << "<" << _name << ">가 <" << target << ">에게 일반공격으로 <" << _meleeAttackDamage << ">의 데미지를 입혔습니다!!!!!\n" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int	realDamage;

	realDamage = amount - _armorDamageReduction;
	if (_hitPoint < realDamage)
		realDamage = _hitPoint;
	if (realDamage <= 0)
	{
		std::cout << _name << ": " << "\"배려 해주셨네요...\"\n";
		realDamage = 0;
	}
	else
		std::cout << _name << ": " << "\"내 로봇 육체..\"\n";
	std::cout << _name << "이(가) " << realDamage << "의 피해를 입었습니다!!\n" << std::endl;
	_hitPoint -= realDamage;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int	realAmount;

	if (_maxHitPoint - _hitPoint < amount)
		realAmount = _maxHitPoint - _hitPoint;
	else
		realAmount = amount;
	if (_hitPoint >= _maxHitPoint)
		std::cout << _name << ": " << "\"체력이 다 차도 기분이 우울해..\"\n";
	else
		std::cout << _name << ": " << "\"체력이 찬다아...\"\n";
	std::cout << _name << "이(가) " << realAmount << "만큼 회복하였습니다.\n" << std::endl; 
	_hitPoint += realAmount;
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
	
	std::cout << printRandomChallenge() << std::endl;
	std::cout << "challenge가 생성되었습니다.\n";
	std::cout << std::endl;
}