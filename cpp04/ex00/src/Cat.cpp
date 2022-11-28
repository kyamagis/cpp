
#include "../includes/Cat.hpp"

Cat::Cat()
{
	std::cout << "\x1b[33mCat Default constructor called\033[m\n";
	this->type = "Cat";
}

Cat::Cat(std::string &_type)
{
	this->type = _type;
	std::cout << "\x1b[33mCat constructor called\033[m\n";
}

Cat::Cat(Cat &_cat): Animal(_cat.type)
{
	std::cout << "\x1b[33mCat Copy constructor called\033[m\n";
	this->type = _cat.type;
}

Cat&	Cat::operator=(Cat &_cat)
{
	std::cout << "\x1b[33mCat Copy assignment operator called\033[m\n";
	this->type = _cat.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "\x1b[33mCat Destructor called\033[m\n";
}

void		Cat::makeSound()const
{
	std::cout << "\a\x1b[33mCat\033[m: meow !" << std::endl;
}
