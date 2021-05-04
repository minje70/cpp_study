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

	raw[0] = *reinterpret_cast<char *>(s1);
	raw[24] = *reinterpret_cast<char *>(n);
	raw[28] = *reinterpret_cast<char *>(s2);

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


void	printData(const struct Data& data)
{
	std::cout << "s1 : " << data.s1 << std::endl;
	std::cout << "n : " << data.n << std::endl;
	std::cout << "s2 : " << data.s2 << std::endl;
}

int main()
{
	struct Data *data;
	void	*voidPtr;

	srand(time(NULL));
	voidPtr = serialize();
	data = deserialize(voidPtr);
	printData(*data);
	return 0;
}