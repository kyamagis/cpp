
#include "../includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "\x1b[33mWrongCat Default constructor called\033[m\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(std::string &_type)
{
	this->type = _type;
	std::cout << "\x1b[33mWrongCat constructor called\033[m\n";
}

WrongCat::WrongCat(WrongCat &_wrongCat): WrongAnimal(_wrongCat.type)
{
	std::cout << "\x1b[33mWrongCat Copy constructor called\033[m\n";
}

WrongCat&	WrongCat::operator=(WrongCat &_wrongCat)
{
	std::cout << "\x1b[33mWrongCat Copy assignment operator called\033[m\n";
	this->type = _wrongCat.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "\x1b[33mWrongCat Destructor called\033[m\n";
}

void		WrongCat::makeSound()const
{
	std::cout << "\a\x1b[33mWrongCat\033[m: meow !" << std::endl;
}
