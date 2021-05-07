#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
	_hitPoint = hp;
	_type = type;
}

Enemy::~Enemy()
{
}

Enemy::Enemy(const Enemy& enemy)
{
	// _hitPoint = enemy.getHP();
	// _type = enemy.getType();
	*this = enemy;
}

Enemy& Enemy::operator = (const Enemy& enemy)
{
	_hitPoint = enemy.getHP();
	_type = enemy.getType();
	return *this;
}

std::string Enemy::getType() const
{
	return _type;
}

int	Enemy::getHP() const
{
	return _hitPoint;
}

void	Enemy::takeDamage(int damage)
{
	int	realDamage;

	if (damage < 0 || _hitPoint <= 0)
		return ;
	if (damage > _hitPoint)
		realDamage = _hitPoint;
	else
		realDamage = damage;
	if (getHP() <= 0)
		delete (this);
	_hitPoint -= realDamage;
}
