#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string	_name;
	int			_actionPoint;
	AWeapon		*_weapon;
	
	Character();
public:
	Character(const std::string& name);
	Character(const Character& character);
	~Character();

	Character& operator = (const Character& character);

	void	recoverAP();
	void	equip(AWeapon* weapon);
	void	attack(Enemy* enemy);

	std::string virtual getName() const;
	int		getAP() const;
	AWeapon	*getAWeapon() const;
};

#endif
