#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <cstdlib>
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
	private :
		Brain *dog_brain;

	public :
		Dog();
		Dog(const std::string &_type);
        Dog(const Dog &_Dog);
		Dog&	operator=(const Dog &_Dog);
		virtual ~Dog();

        virtual void makeSound()const;
		std::string	getIdea(const int &i);
};

#endif