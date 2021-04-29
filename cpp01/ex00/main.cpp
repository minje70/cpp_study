#include "Pony.hpp"
#include <iostream>

Pony*	ponyOnTheHeap()
{
	std::cout << "pony를 힙에 할당합니다." << std::endl;
	Pony *pony;

	pony = new Pony;
	if (pony == 0)
		exit(1);
	pony->SetAge(10);
	pony->SetName("조랑말");
	std::cout << "현재 " << pony->GetName() << "의 나이는 " << pony->GetAge() << ".\n";
	return pony;
}

void	ponyOnTheStack()
{
	std::cout << "pony를 스텍에 할당합니다." << std::endl;
	Pony pony;

	pony.SetAge(20);
	pony.SetName("조랑말");
	std::cout << "현재 " << pony.GetName() << "의 나이는 " << pony.GetAge() << ".\n";
	std::cout << "이 함수가 종료됨과 동시에 pony가 스텍에서 제거됩니다." << std::endl;
}

int main()
{
	Pony *pony;

	pony = ponyOnTheHeap();
	ponyOnTheStack();

	std::cout << "pony를 힙에서 제거합니다." << std::endl;
	delete pony;
	pony = NULL;
	while (1)
		;
	return (0);
}