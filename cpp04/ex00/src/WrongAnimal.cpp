
#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor called\n";
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string &_type)
{
	std::cout << "WrongAnimal constructor called\n";
	this->type = _type;
}

WrongAnimal::WrongAnimal(WrongAnimal &_WrongAnimal)
{
	std::cout << "WrongAnimal Copy constructor called\n";
	this->type = _WrongAnimal.type;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal &_WrongAnimal)
{
	std::cout << "WrongAnimal Copy assignment operator called\n";
	this->type = _WrongAnimal.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called\n";
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}

void		WrongAnimal::makeSound()const
{
	std::cout << "\a\x1b[31mWrongAnimal\033[m: WRYYYYYY!!!" << std::endl;
}
