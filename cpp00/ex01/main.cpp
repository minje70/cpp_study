#include "contact.hpp"
#include "command.hpp"
#include "phonebook.hpp"

int	main(void)
{
	std::string	cmd;
	Phonebook	book;

	while (true)
	{
		std::cout << "명령을 입력하세요: ";
		std::cin >> cmd;
		if (cmd == "EXIT")
			ExitContact();
		else if (cmd == "ADD")
			
	}
	return (0);
}
