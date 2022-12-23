
#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "\x1b[33mWrongCat Default constructor called\033[m" << std::endl;
}

WrongCat::WrongCat(const std::string &_type): WrongAnimal(_type)
{
	std::cout << "\x1b[33mWrongCat constructor called\033[m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &_wrongCat): WrongAnimal(_wrongCat.type)
{
	std::cout << "\x1b[33mWrongCat Copy constructor called\033[m" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &_wrongCat)
{
	std::cout << "\x1b[33mWrongCat Copy assignment operator called\033[m" << std::endl;
	if (this != &_wrongCat)
	{
		this->type = _wrongCat.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "\x1b[33mWrongCat Destructor called\033[m" << std::endl;
}

void	WrongCat::makeSound()const
{
	std::cout << "\a\x1b[33mWrongCat\033[m: meow !" << std::endl;
}
