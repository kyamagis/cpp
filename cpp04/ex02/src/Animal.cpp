
#include "../includes/Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const std::string &_type): type(_type)
{
	std::cout << "Animal constructor called"  << std::endl;
	this->type = _type;
}

Animal::Animal(const Animal &_animal): type(_animal.getType())
{
	std::cout << "Animal Copy constructor called"  << std::endl;
}

Animal&	Animal::operator=(const Animal &_animal)
{
	std::cout << "Animal Copy assignment operator called"  << std::endl;
	if (this != &_animal)
	{
		this->type = _animal.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}
