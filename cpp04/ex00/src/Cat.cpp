
#include "../includes/Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "\x1b[33mCat Default constructor called\033[m" << std::endl;
}

Cat::Cat(const std::string &_type): Animal(_type)
{
	std::cout << "\x1b[33mCat constructor called\033[m" << std::endl;
}

Cat::Cat(const Cat &_cat): Animal(_cat.type)
{
	std::cout << "\x1b[33mCat Copy constructor called\033[m" << std::endl;
}

Cat&	Cat::operator=(const Cat &_cat)
{
	std::cout << "\x1b[33mCat Copy assignment operator called\033[m" << std::endl;
	if (this != &_cat)
	{
		this->type = _cat.type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "\x1b[33mCat Destructor called\033[m" << std::endl;
}

void	Cat::makeSound()const
{
	std::cout << "\a\x1b[33mCat\033[m: meow !" << std::endl;
}
