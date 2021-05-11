#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon2.hpp"
#include "Peon.hpp"

int main()
{
	{
		Sorcerer robert("Robert", "the Magnificent");

		Victim jim("Jimmy");
		Peon joe("Joe");

		std::cout << robert << jim << joe;

		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	std::cout << "\n******************************************************************************************\n" << std::endl;
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Peon2 joejoe("JoeJoe");

	std::cout << robert << jim << joe << joejoe;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(joejoe);
	return 0;
}
