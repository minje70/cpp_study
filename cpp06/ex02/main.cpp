#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A입니다!!!" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B입니다!!!" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C입니다!!!" << std::endl;
	else
		std::cout << "아무것도 아닙니다!!" << std::endl;
}

void identify_from_reference(Base &p)
{
	// 레퍼런스는 exception 처리가 됨.
	try
	{
		A& temp = dynamic_cast<A&>(p);
		(void)temp;
		std::cout << "A입니다!!" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B& temp = dynamic_cast<B&>(p);
		(void)temp;
		std::cout << "B입니다!!" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C& temp = dynamic_cast<C&>(p);
		(void)temp;
		std::cout << "C입니다!!" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}

Base *generate(void)
{
	int num = rand() % 3;

	if (num == 0)
		return new A;
	else if (num == 1)
		return new B;
	else
		return new C;
}

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		std::cout << "TEST " << i << std::endl;
		Base *test = generate();
		identify_from_pointer(test);
		identify_from_reference(*test);
		delete test;
		std::cout << std::endl;
	}
	return 0;
}