/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:57:46 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/25 22:52:31 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(): AMateria("ice"){}

Ice::Ice(const Ice &ice): AMateria(ice.getType()){}

Ice&	Ice::operator=(const Ice &ice)
{
	(void)ice;
	return *this;
}

Ice::~Ice(){}

Ice*	Ice::clone() const{ return new Ice();}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
