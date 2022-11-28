
#include "../includes/Dog.hpp"

Dog::Dog()
{
	std::cout << "\x1b[34mDog Default constructor called\033[m\n";
	this->type = "Dog";
	try
	{	
		this->dog_brain = new Brain;
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << e.what() << "\n";
		std::exit(EXIT_FAILURE);
	}
}

Dog::Dog(std::string &_type)
{
	this->type = _type;
	std::cout << "\x1b[34mDog constructor called\033[m\n";
	try
	{	
		this->dog_brain = new Brain();
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << e.what() << "\n";
		std::exit(EXIT_FAILURE);
	}
}

Dog::Dog(Dog &_dog): Animal(_dog.type)
{
	std::cout << "\x1b[34mDog Copy constructor called\033[m\n";
	try
	{	
		this->dog_brain = new Brain();
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << e.what() << "\n";
		std::exit(EXIT_FAILURE);
	}
	this->dog_brain->ideasdup(*_dog.dog_brain);
}

Dog&	Dog::operator=(Dog &_dog)
{
	std::cout << "\x1b[34mDog Copy assignment operator called\033[m\n";
	this->type = _dog.type;
	if (this->dog_brain)
		delete this->dog_brain;
	try
	{	
		this->dog_brain = new Brain();
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << e.what() << "\n";
		std::exit(EXIT_FAILURE);
	}
	this->dog_brain->ideasdup(*_dog.dog_brain);
	return *this;
}

Dog::~Dog()
{
	std::cout << "\x1b[34mDog Destructor called\033[m\n";
	if (this->dog_brain)
		delete this->dog_brain;
}

void		Dog::makeSound()const
{
	std::cout << "\a\x1b[34mDog\033[m: bowwow !" << std::endl;
}

std::string	Dog::getIdea(const int &i)
{
	if (i < 0 || 99 < i)
		std::exit(EXIT_FAILURE);
	return dog_brain->get_idea(i);
}
