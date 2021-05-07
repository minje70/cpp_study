#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy
{
private:
	int			_hitPoint;
	std::string	_type;
	Enemy();
public:
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy& enemy);
	virtual ~Enemy();

	Enemy& operator = (const Enemy& enemy);
	std::string	virtual getType() const;
	int					getHP() const;

	virtual	void		takeDamage(int damage);
};

#endif
