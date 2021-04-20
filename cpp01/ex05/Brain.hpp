#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <sstream>
#include <string>
#include <iostream>

class Brain {
private:
	std::string data;
public:
	Brain();
	~Brain();
	std::string	identify() const;
};

#endif