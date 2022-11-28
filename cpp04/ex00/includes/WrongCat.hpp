#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	public :
		WrongCat();
        WrongCat(std::string &_type);
		WrongCat(WrongCat &_WrongCat);
		WrongCat&	operator=(WrongCat &_WrongCat);
		~WrongCat();

        void makeSound()const;
};

#endif