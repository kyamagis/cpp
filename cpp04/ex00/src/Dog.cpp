
#include "../includes/Dog.hpp"

Dog::Dog()
{
	std::cout << "\x1b[34mDog Default constructor called\033[m\n";
	this->type = "Dog";
}

Dog::Dog(std::string &_type)
{
	this->type = _type;
	std::cout << "\x1b[34mDog constructor called\033[m\n";
}

Dog::Dog(Dog &_dog): Animal(_dog.type)
{
	std::cout << "\x1b[34mDog Copy constructor called\033[m\n";
}

Dog&	Dog::operator=(Dog &_dog)
{
	std::cout << "\x1b[34mDog Copy assignment operator called\033[m\n";
	this->type = _dog.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "\x1b[34mDog Destructor called\033[m\n";
}

void		Dog::makeSound()const
{
	std::cout << "\a\x1b[34mDog\033[m: bowwow !" << std::endl;
}