#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"

// int main()
// {
// 	Sorcerer sorcerer("mijeong", "the greatest developer");
// 	Victim victim("hyeonski");
// 	Peon	peon("hyeonkim");

// 	std::cout << "***victim***" << std::endl;
// 	sorcerer.polymorph(victim);
// 	std::cout << "***peon***" << std::endl;
// 	sorcerer.polymorph(peon);
// 	return 0;
// }

int main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	return 0;
}
