
#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "\x1b[32mBrain Default constructor called\033[m\n" << std::endl;
	for (int i = 0; i < 100 ; i++)
		this->ideas[i] = "No have idea";
}

Brain::Brain(const Brain &_Brain)
{
	std::cout << "\x1b[32mBrain Copy constructor called\033[m\n" << std::endl;
	*this = _Brain;
}

Brain&	Brain::operator=(const Brain &_Brain)
{
	std::cout << "\x1b[32mBrain Copy assignment operator called\033[m\n" << std::endl;
	if (this != &_Brain)
	{
		for (int i = 0; i < 100 ; i++)
			this->ideas[i] = _Brain.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "\x1b[32mBrain Destructor called\033[m\n";
}

void		Brain::set_idea(const int i, const std::string &_ideas)
{
	if (i < 0 || 99 < i)
		return ;
	this->ideas[i] = _ideas;
}

std::string Brain::get_idea(const int i)const
{
	if (i < 0 || 99 < i)
		std::exit(EXIT_FAILURE);
	return this->ideas[i];
}

void	Brain::ideasdup(const Brain &_brain)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = _brain.ideas[i];
}
