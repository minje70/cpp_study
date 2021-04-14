#include "phonebook.hpp"
#include "contact.hpp"
#include <iomanip>

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
	int	i;

	i = -1;
	std::cout << "---------------------------------------------\n";
	std::cout << "|--index---|first name|last name-|-nickname-|\n";
	while (++i < this->GetTotal())
	{
		std::cout << "|" << std::setw(10) << i << "|";
		if (this->contacts[i].GetFirstName().length() >= 11)
			std::cout << std::setw(9) << this->contacts[i].GetFirstName() << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].GetFirstName() << "|";
		if (this->contacts[i].GetLastName().length() >= 11)
			std::cout << std::setw(9) << this->contacts[i].GetLastName() << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].GetLastName() << "|";
		if (this->contacts[i].GetNickName().length() >= 11)
			std::cout << std::setw(9) << this->contacts[i].GetNickName() << ".|\n";
		else
			std::cout << std::setw(10) << this->contacts[i].GetNickName() << "|\n";
	}
	std::cout << "---------------------------------------------\n";
}
