
#include "../includes/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor called\n";
	this->type = "Animal";
}

Animal::Animal(std::string &_type)
{
	std::cout << "Animal constructor called\n";
	this->type = _type;
}

Animal::Animal(Animal &_animal): type(_animal.type)
{
	std::cout << "Animal Copy constructor called\n";
}

Animal&	Animal::operator=(Animal &_animal)
{
	std::cout << "Animal Copy assignment operator called\n";
	this->type = _animal.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called\n" << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}
