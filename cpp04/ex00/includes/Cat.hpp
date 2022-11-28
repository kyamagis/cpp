#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class	Cat: public Animal
{
	public :
		Cat();
        Cat(std::string &_type);
		Cat(Cat &_Cat);
		Cat&	operator=(Cat &_Cat);
		virtual ~Cat();

        virtual void makeSound()const;
};

#endif