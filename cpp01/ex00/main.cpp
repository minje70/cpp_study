#include "Pony.hpp"
#include <iostream>

void	ponyOnTheHeap()
{
	std::cout << "pony를 힙에 할당합니다." << std::endl;
	Pony *pony;

	pony = new Pony;
	pony->SetAge(10);
	pony->SetName("조랑말");
	std::cout << "현재 " << pony->GetName() << "의 나이는 " << pony->GetAge() << ".\n";
	std::cout << ""
}

void	ponyOnTheStack()
{

}

int main()
{


	return (0);
}