#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <cstdlib>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
	private :
		Brain *cat_brain;

	public :
		Cat();
        Cat(const std::string &_type);
		Cat(const Cat &_Cat);
		Cat&	operator=(const Cat &_Cat);
		virtual ~Cat();

        virtual void makeSound()const;
		std::string	getIdea(const int &i);
};

#endif