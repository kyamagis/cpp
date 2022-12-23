
#include "../includes/Dog.hpp"

Dog::Dog(): Animal("Dog"), dog_brain(new Brain())
{
	std::cout << "\x1b[34mDog Default constructor called\033[m" << std::endl;
}

Dog::Dog(const std::string &_type): Animal(_type), dog_brain(new Brain())
{
	std::cout << "\x1b[34mDog constructor called\033[m" << std::endl;
}

Dog::Dog(const Dog &_dog): Animal(_dog.type), dog_brain(new Brain())
{
	std::cout << "\x1b[34mDog Copy constructor called\033[m" << std::endl;
	this->dog_brain->ideasdup(*_dog.dog_brain);
}

Dog&	Dog::operator=(const Dog &_dog)
{
	std::cout << "\x1b[34mDog Copy assignment operator called\033[m" << std::endl;
	this->type = _dog.type;
	if (this != &_dog)
	{
		if (this->dog_brain)
			delete this->dog_brain;
		this->dog_brain = new Brain();
		this->dog_brain->ideasdup(*_dog.dog_brain);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "\x1b[34mDog Destructor called\033[m" << std::endl;
	if (this->dog_brain)
		delete this->dog_brain;
}

void	Dog::makeSound()const
{
	std::cout << "\a\x1b[34mDog\033[m: bowwow !" << std::endl;
}

std::string	Dog::getIdea(const int &i)
{
	if (i < 0 || 99 < i)
		std::exit(EXIT_FAILURE);
	return dog_brain->get_idea(i);
}
