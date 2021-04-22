#include "FragTrap.hpp"

FragTrap::FragTrap()
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
	std::cout << "\"제 1원칙: 인류를 보호한다! 제 2원칙: 온 힘을 다 해 잭에게 복종한다. 제 3원칙: 땐스!! 이름도 안지어주고 너무하네!!!!\n\"" << _name << "이(가) 생성되었습니다.\n" << std::endl;
}

FragTrap::FragTrap(std::string name)
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
	std::cout << _name << ": \"제 1원칙: 인류를 보호한다! 제 2원칙: 온 힘을 다 해 잭에게 복종한다. 제 3원칙: 땐스!\n\"" << _name << "이(가) 생성되었습니다.\n" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << _name << ": \"난 죽었다! 난 죽었어 오 하나님 맙소사 난 죽었어!\n\"" << _name << "이(가) 파괴되었습니다.\n" << std::endl;
}

FragTrap	&FragTrap::operator = (const FragTrap &frag)
{
	std::cout << "Assignation operator called" << std::endl;
	_hitPoint = frag._hitPoint;
	_maxHitPoint = frag._maxHitPoint;
	_energyPoints = frag._energyPoints;
	_maxEnergyPoints = frag._maxEnergyPoints;
	_level =frag._level;
	_meleeAttackDamage = frag._meleeAttackDamage;
	_rangedAttackDamage = frag._rangedAttackDamage;
	_armorDamageReduction = frag._armorDamageReduction;
	_name = frag._name;

	return *this;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << _name << ": 핀 잡아 당겨 던져!\n";
	std::cout << "<" << _name << ">가 <" << target << ">에게 원거리 공격으로 <" << _rangedAttackDamage << ">의 데미지를 입혔습니다!!!!!\n" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << _name << ": 죽여, 재 장전! 죽이고, 재 장전! 죽여! 재 장전!!\n";
	std::cout << "<" << _name << ">가 <" << target << ">에게 일반공격으로 <" << _meleeAttackDamage << ">의 데미지를 입혔습니다!!!!!\n" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	unsigned int	realDamage;

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

void	FragTrap::beRepaired(unsigned int amount)
{
	unsigned int	realAmount;

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

std::string	printRandomAttack()
{
	std::string	message[5] = {"나는 죽음과 총알의 토네이도!",
							"내가 다시 죽이기 전에 나를 멈춰!!",
							"하하하! 로봇 군주 앞에 쓰러져라!",
							"헤헤 헤헤, mwaa ha ha ha, MWAA HA HA HA!",
							"아무도 날 막을 수 없어!!"};
	return (message[rand() % 5]);
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (_energyPoints < 25)
		std::cout << _name << ": \"에너지가... 부족해....\"\n";
	else
	{
		std::cout << _name << ": \"" << printRandomAttack() << "\"\n";
		std::cout << _name << "이(가) " << target << "에게 무작위 공격을 가했습니다. 남은 energy: " << _energyPoints << "\n";
		_energyPoints -= 25;
	}
	std::cout << std::endl;
}