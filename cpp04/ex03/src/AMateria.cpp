/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:15:04 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/25 23:03:28 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria(): _type("No type"){}

AMateria::AMateria(const AMateria &type): _type(type._type){}

AMateria::AMateria(std::string const & type): _type(type){}

AMateria:: ~AMateria(){}

AMateria&	AMateria::operator=(const AMateria &a)
{
	if (this != &a)
	{
		this->_type = a._type;
	}
	return *this;
}

std::string const & AMateria::getType() const{ return this->_type;}

AMateria* AMateria::clone() const{ return NULL;}

void	AMateria::use(ICharacter& target)
{
	std::cout << "Nothing" <<target.getName()  << std::endl;
}