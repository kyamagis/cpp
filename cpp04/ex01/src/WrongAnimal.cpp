
#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &_type): type(_type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &_WrongAnimal): type(_WrongAnimal.getType())
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &_WrongAnimal)
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	if (this != &_WrongAnimal)
	{
		this->type = _WrongAnimal.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}

void		WrongAnimal::makeSound()const
{
	std::cout << "\a\x1b[31mWrongAnimal\033[m: WRYYYYYY!!!" << std::endl;
}
