#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contacts
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	login;
	std::string	postalAddress;
	std::string	emailAddress;
	std::string	phoneNumber;
	std::string	birthdayDate;
	std::string	favoriteMeal;
	std::string	underwearColor;
	std::string	darkestSecret;

public:
	Contacts();
	~Contacts();
	std::string	GetFirstName();
	std::string	GetLastName();
	std::string	GetNickName();
	std::string	GetLogin();
	std::string	GetPostalAddress();
	std::string	GetEmailAddress();
	std::string	GetPhoneNumber();
	std::string	GetBirthdayDate();
	std::string	GetFavoriteMeal();
	std::string	GetUnderwearColor();
	std::string	GetDarkestSecret();

	void		SetFirstName(std::string str);
	void		SetLastName(std::string str);
	void		SetNickName(std::string str);
	void		SetLogin(std::string str);
	void		SetPostalAddress(std::string str);
	void		SetEmailAddress(std::string str);
	void		SetPhoneNumber(std::string str);
	void		SetBirthdayDate(std::string str);
	void		SetFavoriteMeal(std::string str);
	void		SetUnderwearColor(std::string str);
	void		SetDarkestSecret(std::string str);

	void		AddContact();
	void		SearchContactInput();
};
#endif