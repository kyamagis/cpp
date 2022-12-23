
#include "../includes/Cat.hpp"

Cat::Cat(): Animal("Cat"), cat_brain(new Brain())
{
	std::cout << "\x1b[33mCat Default constructor called\033[m" << std::endl;
}

Cat::Cat(const std::string &_type): Animal(_type), cat_brain(new Brain())
{
	std::cout << "\x1b[33mCat constructor called\033[m" << std::endl;
}

Cat::Cat(const Cat &_cat): Animal(_cat.type), cat_brain(new Brain())
{
	std::cout << "\x1b[33mCat Copy constructor called\033[m" << std::endl;
	this->cat_brain->ideasdup(*_cat.cat_brain);
}

Cat&	Cat::operator=(const Cat &_cat)
{
	std::cout << "\x1b[33mCat Copy assignment operator called\033[m" << std::endl;
	this->type = _cat.type;
	if (this != &_cat)
	{
		if (this->cat_brain)
			delete this->cat_brain;
		this->cat_brain = new Brain();
		this->cat_brain->ideasdup(*_cat.cat_brain);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "\x1b[33mCat Destructor called\033[m" << std::endl;
	if (this->cat_brain)
		delete this->cat_brain;
}

void	Cat::makeSound()const
{
	std::cout << "\a\x1b[33mCat\033[m: meow !" << std::endl;
}

std::string	Cat::getIdea(const int &i)
{
	if (i < 0 || 99 < i)
		std::exit(EXIT_FAILURE);
	return cat_brain->get_idea(i);
}
