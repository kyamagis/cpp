#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class	Dog: public Animal
{
	public :
		Dog();
		Dog(const std::string &_type);
        Dog(const Dog &_Dog);
		Dog&	operator=(const Dog &_Dog);
		virtual ~Dog();

        virtual void makeSound()const;
};

#endif