#include "contact.hpp"
#include "phonebook.hpp"
#include <iomanip>

int	main(void)
{
	std::string	cmd;
	Phonebook	book;

	while (true)
	{
		std::cout << "ADD : 전화번호 추가\nSEARCH : 전화번호 찾기\nEXIT : 종료" << std::endl << ":";
		std::cin >> cmd;
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
