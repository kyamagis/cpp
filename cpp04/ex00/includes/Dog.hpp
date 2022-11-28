#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class	Dog: public Animal
{
	public :
		Dog();
		Dog(std::string &_type);
        Dog(Dog &_Dog);
		Dog&	operator=(Dog &_Dog);
		virtual ~Dog();

        virtual void makeSound()const;
};

#endif