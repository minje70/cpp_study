#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	// {
	// 	IMateriaSource* src = new MateriaSource();
	// 	src->learnMateria(new Ice());
	// 	src->learnMateria(new Cure());

	// 	ICharacter* me = new Character("me");

	// 	AMateria* tmp;
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);

	// 	ICharacter* bob = new Character("bob");

	// 	me->use(0, *bob);
	// 	me->use(1, *bob);

	// 	delete bob;
	// 	delete me;
	// 	delete src;
	// }
	// std::cout << "**************************************************************************************" << std::endl;
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// ICharacter* me = new Character("me");

	// AMateria* tmp1;
	// AMateria* tmp2;
	// AMateria* tmp3;
	// AMateria* tmp4;
	// AMateria* tmp5;

	// tmp1 = src->createMateria("ice");
	// me->equip(tmp1);
	// tmp2 = src->createMateria("cure");
	// me->equip(tmp2);
	// tmp3 = src->createMateria("ice");
	// me->equip(tmp3);
	// tmp4 = src->createMateria("cure");
	// me->equip(tmp4);
	// tmp5 = src->createMateria("ice");
	// me->equip(tmp5);

	// ICharacter* bob = new Character("bob");

	// me->use(0, *bob);
	// me->use(1, *bob);
	// me->use(2, *bob);
	// me->use(3, *bob);
	// std::cout << "다씀" << std::endl;
	// me->use(4, *bob);

	// delete bob;
	// delete me;
	// delete src;

	IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp = nullptr;
    AMateria* first = nullptr;
    tmp = src->createMateria("fire");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    first = tmp;
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    delete tmp;
    me->equip(nullptr);
    ICharacter* bob = new Character("bob");
    me->use(-1, *bob);
    std::cout << "materia exp: " << first->getXP() << std::endl;
    me->use(0, *bob);
    std::cout << "materia exp: " << first->getXP() << std::endl;
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);
    me->unequip(0);
    std::cout << "materia exp: " << first->getXP() << std::endl;
    me->use(0, *bob);
    std::cout << "materia exp: " << first->getXP() << std::endl;
    me->use(3, *bob);
    me->unequip(-1);
    me->equip(first);
    delete bob;
	std::cout << "ttttttttttttttttttttttttttttttt\n";
    delete me;
	std::cout << "ttttttttttttttttttttttttttttttt\n";
    delete src;
    return (0);

	return 0;
}