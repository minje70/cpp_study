#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"

class Character
{
private:
	std::string	_name;
	int			_actionPoint;
	int			_maxAP;
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

	std::string const	getName() const;
	int		getAP() const;
	AWeapon	*getAWeapon() const;
};

std::ostream& operator << (std::ostream& out, const Character& character);

#endif
