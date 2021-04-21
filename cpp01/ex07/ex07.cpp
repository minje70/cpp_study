#include "ex07.hpp"

int main(int ac, char **av)
{
	std::ifstream	fin;
	std::ofstream	fout;

	if (ac != 4)
	{
		std::cout << "입력 갯수 틀림!!\n";
		return 1;
	}
	std::string	str;
	std::string fileName(av[1]);
	std::string	s1(av[2]);
	std::string	s2(av[3]);
	int			i;
	fin.open(fileName);
	fout.open(fileName + ".replace");
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			std::getline(fin, str);
			i = 0;
			// 찾고
			while ((i = (int)str.find(s1, i)) != -1)
			{
				// 바꾸고
				str.replace(i, s1.length(), s2);
				i += s2.length();
			}
			fout << str;
			if (!fin.eof())
				fout << std::endl;
		}
		fin.close();
		fout.close();
	}
	return 0;
}