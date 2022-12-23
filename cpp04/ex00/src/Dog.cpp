
#include "../includes/Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "\x1b[34mDog Default constructor called\033[m" << std::endl;
}

Dog::Dog(const std::string &_type): Animal(_type)
{
	std::cout << "\x1b[34mDog constructor called\033[m" << std::endl;
}

Dog::Dog(const Dog &_dog): Animal(_dog.type)
{
	std::cout << "\x1b[34mDog Copy constructor called\033[m" << std::endl;
}

Dog&	Dog::operator=(const Dog &_dog)
{
	std::cout << "\x1b[34mDog Copy assignment operator called\033[m" << std::endl;
	if (this != &_dog)
	{
		this->type = _dog.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "\x1b[34mDog Destructor called\033[m" << std::endl;
}

void	Dog::makeSound()const
{
	std::cout << "\a\x1b[34mDog\033[m: bowwow !" << std::endl;
}