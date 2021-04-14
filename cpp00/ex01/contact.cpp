#include "contact.hpp"

Contacts::Contacts()
{
}

Contacts::~Contacts()
{
}

std::string	Contacts::GetFirstName()
{
	return (this->firstName);
}
std::string	Contacts::GetLastName()
{
	return (this->lastName);
}
std::string	Contacts::GetNickName()
{
	return (this->nickName);
}
std::string	Contacts::GetLogin()
{
	return (this->login);
}
std::string	Contacts::GetPostalAddress()
{
	return (this->postalAddress);
}
std::string	Contacts::GetEmailAddress()
{
	return (this->emailAddress);
}
std::string	Contacts::GetPhoneNumber()
{
	return (this->phoneNumber);
}
std::string	Contacts::GetBirthdayDate()
{
	return (this->birthdayDate);
}
std::string	Contacts::GetFavoriteMeal()
{
	return (this->favoriteMeal);
}
std::string	Contacts::GetUnderwearColor()
{
	return (this->underwearColor);
}
std::string	Contacts::GetDarkestSecret()
{
	return (this->darkestSecret);
}

void		Contacts::SetFirstName(std::string str)
{
	this->firstName = str;
}
void		Contacts::SetLastName(std::string str)
{
	this->lastName = str;
}
void		Contacts::SetNickName(std::string str)
{
	this->nickName = str;
}
void		Contacts::SetLogin(std::string str)
{
	this->login = str;
}
void		Contacts::SetPostalAddress(std::string str)
{
	this->postalAddress = str;
}
void		Contacts::SetEmailAddress(std::string str)
{
	this->emailAddress = str;
}
void		Contacts::SetPhoneNumber(std::string str)
{
	this->phoneNumber = str;
}
void		Contacts::SetBirthdayDate(std::string str)
{
	this->birthdayDate = str;
}
void		Contacts::SetFavoriteMeal(std::string str)
{
	this->favoriteMeal = str;
}
void		Contacts::SetUnderwearColor(std::string str)
{
	this->underwearColor = str;
}
void		Contacts::SetDarkestSecret(std::string str)
{
	this->darkestSecret = str;
}

void		Contacts::AddContact()
{
	std::cout << "first name : ";
	std::cin >> this->firstName;
	std::cout << "last name : ";
	std::cin >> this->lastName;
	std::cout << "nickname : ";
	std::cin >> this->nickName;
	std::cout << "login : ";
	std::cin >> this->login;
	std::cout << "postal address : ";
	std::cin >> this->postalAddress;
	std::cout << "email address : ";
	std::cin >> this->emailAddress;
	std::cout << "phone number : ";
	std::cin >> this->phoneNumber;
	std::cout << "birthday date : ";
	std::cin >> this->birthdayDate;
	std::cout << "favorite meal : ";
	std::cin >> this->favoriteMeal;
	std::cout << "underwear color : ";
	std::cin >> this->underwearColor;
	std::cout << "darkest secret : ";
	std::cin >> this->darkestSecret;
	std::cout << "입력 끝\n";
}
