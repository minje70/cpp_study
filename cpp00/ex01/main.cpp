#include "contact.hpp"
#include "phonebook.hpp"
#include <iomanip>

int	main(void)
{
	std::string	cmd;
	Phonebook	book;

	while (true)
	{
		book.PrintManual();
		std::cin >> cmd;
		if (std::cin.eof())
			return (-1);
		if (cmd == "ADD")
			book.AddContact();
		else if (cmd == "SEARCH")
			book.SearchContact();
		else if (cmd == "EXIT")
			book.ExitContact();
		else
			std::cout << "다시 입력하시오!!\n";
	}
	return (0);
}
