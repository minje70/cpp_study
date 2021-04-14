#include "phonebook.hpp"
#include "contact.hpp"

Phonebook::Phonebook()
{
	total = 0;
}

Phonebook::~Phonebook()
{
}

int			Phonebook::GetTotal()
{
	return (this->total);
}
void		Phonebook::AddTotal()
{
	this->total++;
}

void		Phonebook::ExitContact()
{
	std::cout << "프로그램을 종료합니다.\n";
	exit(0);
}

void		Phonebook::AddContact()
{
	if (total >= 8)
		std::cout << "메모리가 가득 찼어요!!\n";
	else
	{
		contacts[total].AddContact();
		AddTotal();
	}
}

void		Phonebook::SearchContact()
{
	
}
