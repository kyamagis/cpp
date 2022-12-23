#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	public :
		WrongCat();
        WrongCat(const std::string &_type);
		WrongCat(const WrongCat &_wrongCat);
		WrongCat&	operator=(const WrongCat &_wrongCat);
		~WrongCat();

        void makeSound()const;
};

#endif