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

void		Phonebook::SearchContactInput()
{
	int	input;
	int	i;

	i = -1;
	while (++i < 5)
	{
		std::cout << "index를 입력하세요 : ";
		std::cin >> input;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "잘못된 input을 선택했습니다.\n";
		}
		else if (input >= 0 && input < this->total)
		{
			std::cout << "firstName : " << this->contacts[input].GetFirstName() << std::endl;
			std::cout << "lastName : " << this->contacts[input].GetLastName() << std::endl;
			std::cout << "nickName : " << this->contacts[input].GetNickName() << std::endl;
			std::cout << "login : " << this->contacts[input].GetLogin() << std::endl;
			std::cout << "postalAddress : " << this->contacts[input].GetPostalAddress() << std::endl;
			std::cout << "emailAddress : " << this->contacts[input].GetEmailAddress() << std::endl;
			std::cout << "phoneNumber : " << this->contacts[input].GetPhoneNumber() << std::endl;
			std::cout << "birthdayDate : " << this->contacts[input].GetBirthdayDate() << std::endl;
			std::cout << "favoriteMeal : " << this->contacts[input].GetFavoriteMeal() << std::endl;
			std::cout << "underwearColor : " << this->contacts[input].GetUnderwearColor() << std::endl;
			std::cout << "darkestSecret : " << this->contacts[input].GetDarkestSecret() << std::endl;
			return ;
		}
		else
			std::cout << "잘못된 input을 선택했습니다.\n";
	}
	std::cout << "5번의 기회가 지났군요... 다시 시도하세요..." << std::endl;
}

void		Phonebook::SearchContact()
{
	int	i;

	i = -1;
	std::cout << "---------------------------------------------\n";
	std::cout << "|--index---|first name|last name-|-nickname-|\n";
	while (++i < this->total)
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
	this->SearchContactInput();
}

void		Phonebook::PrintManual()
{
	std::cout << "-------------------------\n";
	std::cout << "|" << std::setw(29) << "ADD : 전화번호 추가" << "|" << std::endl;
	std::cout << "|" << std::setw(29) << "SEARCH : 전화번호 찾기" << "|" << std::endl;
	std::cout << "|" << std::setw(25) << "EXIT : 종료" << "|" << std::endl;
	std::cout << "-------------------------\n";
	std::cout << ":";
}