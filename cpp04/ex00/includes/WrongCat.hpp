#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	public :
		WrongCat();
        WrongCat(const std::string &_type);
		WrongCat(const WrongCat &_WrongCat);
		WrongCat&	operator=(const WrongCat &_WrongCat);
		~WrongCat();

        void makeSound()const;
};

#endif