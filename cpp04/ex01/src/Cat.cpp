
#include "../includes/Cat.hpp"

Cat::Cat()
{
	std::cout << "\x1b[33mCat Default constructor called\033[m\n";
	this->type = "Cat";
	try
	{	
		this->cat_brain = new Brain;
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << e.what() << "\n";
		std::exit(EXIT_FAILURE);
	}
}

Cat::Cat(std::string &_type)
{
	this->type = _type;
	std::cout << "\x1b[33mCat constructor called\033[m\n";
	try
	{	
		this->cat_brain = new Brain;
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << e.what() << "\n";
		std::exit(EXIT_FAILURE);
	}
}

Cat::Cat(Cat &_cat): Animal(_cat.type)
{
	std::cout << "\x1b[33mCat Copy constructor called\033[m\n";
	try
	{	
		this->cat_brain = new Brain;
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << e.what() << "\n";
		std::exit(EXIT_FAILURE);
	}
	this->cat_brain->ideasdup(*_cat.cat_brain);
}

Cat&	Cat::operator=(Cat &_cat)
{
	std::cout << "\x1b[33mCat Copy assignment operator called\033[m\n";
	this->type = _cat.type;
	if (this->cat_brain)
		delete this->cat_brain;
	try
	{	
		this->cat_brain = new Brain;
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << e.what() << "\n";
		std::exit(EXIT_FAILURE);
	}
	this->cat_brain->ideasdup(*_cat.cat_brain);
	return *this;
}

Cat::~Cat()
{
	std::cout << "\x1b[33mCat Destructor called\033[m\n";
	if (this->cat_brain)
		delete this->cat_brain;
}

void		Cat::makeSound()const
{
	std::cout << "\a\x1b[33mCat\033[m: meow !" << std::endl;
}

std::string	Cat::getIdea(const int &i)
{
	if (i < 0 || 99 < i)
		std::exit(EXIT_FAILURE);
	return cat_brain->get_idea(i);
}
