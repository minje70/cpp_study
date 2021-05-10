#include "main.hpp"

std::string*	randomNumberString(void)
{
	std::string numString = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	std::string *result = new std::string;

	for (int i = 0; i < 8; i++)
	{
		result->push_back(numString[rand() % numString.length()]);
	}
	return result;
}

// string의 크기는 24이다.
void * serialize(void)
{
	char *raw = new char[52]; // str + n + str == 24 + 4 + 24
	std::string* s1 = randomNumberString();
	std::string* s2 = randomNumberString();
	int* n = new int;
	*n = rand() % 1000;

	*(reinterpret_cast<std::string *>(raw)) = *s1;
	*(reinterpret_cast<int *>(raw + 24)) = *n;
	*(reinterpret_cast<std::string *>(raw + 28)) = *s2;

	delete s1;
	delete s2;
	return raw;
}

struct Data* deserialize(void *raw)
{
	struct Data* data = new struct Data;
	char *result;

	result = reinterpret_cast<char *>(raw);
	data->s1 = *reinterpret_cast<std::string *>(result);
	data->n = *reinterpret_cast<int *>(result + 24);
	data->s2 = *reinterpret_cast<std::string *>(result + 28);
	return data;
}

void	printData(const struct Data& data, void *voidPtr)
{
	char *temp = reinterpret_cast<char *>(voidPtr);

	std::cout << "***data***" << "\n";
	std::cout << "s1 : " << data.s1 << "\n";
	std::cout << "n : " << data.n << "\n";
	std::cout << "s2 : " << data.s2 << "\n\n";
	std::cout << "***voidPtr***\n";
	std::cout << "s1 : " << *reinterpret_cast<std::string *>(temp) << "\n";
	std::cout << "n : " << *reinterpret_cast<int *>(temp + 24) << "\n";
	std::cout << "s2 : " << *reinterpret_cast<std::string *>(temp + 28) << "\n";
}

int main()
{
	struct Data *data;
	void	*voidPtr;

	srand(time(NULL));
	voidPtr = serialize();
	data = deserialize(voidPtr);
	printData(*data, voidPtr);
	return 0;
}