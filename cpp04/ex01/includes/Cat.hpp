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
        Cat(std::string &_type);
		Cat(Cat &_cat);
		Cat&	operator=(Cat &_cat);
		virtual ~Cat();

        virtual void makeSound()const;
		std::string	getIdea(const int &i);
};

#endif