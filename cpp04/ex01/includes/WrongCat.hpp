#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	public :
		WrongCat();
        WrongCat(std::string &_type);
		WrongCat(WrongCat &_wrongCat);
		WrongCat&	operator=(WrongCat &_wrongCat);
		~WrongCat();

        void makeSound()const;
};

#endif