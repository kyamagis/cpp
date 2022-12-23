#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class	Cat: public Animal
{
	public :
		Cat();
        Cat(const std::string &_type);
		Cat(const Cat &_Cat);
		Cat&	operator=(const Cat &_Cat);
		virtual ~Cat();

        virtual void makeSound()const;
};

#endif