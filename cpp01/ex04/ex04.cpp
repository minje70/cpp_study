#include <iostream>

void	changePtr(std::string *ptr)
{
	*ptr += " mijeong";
}

void	changeRef(std::string &ref)
{
	ref += " mijeong";
}

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	&ref = str;
	std::string *ptr = &str;

	std::cout << "시작str : " << str << std::endl;
	std::cout << "시작ref : " << ref << std::endl;
	std::cout << "시작*ptr : " << *ptr << std::endl << std::endl;
	changePtr(ptr);
	std::cout << "cgangePtr str : " << str << std::endl;
	std::cout << "cgangePtr ref : " << ref << std::endl;
	std::cout << "cgangePtr *ptr : " << *ptr << std::endl << std::endl;
	changeRef(str);
	std::cout << "changeRef str : " << str << std::endl;
	std::cout << "changeRef ref : " << ref << std::endl;
	std::cout << "changeRef *ptr : " << *ptr << std::endl << std::endl;
}