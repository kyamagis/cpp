/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:57:42 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/25 22:52:08 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	
}

Cure::Cure(const Cure &cure): AMateria(cure.getType())
{
	
}

Cure&	Cure::operator=(const Cure &cure)
{
	(void)cure;
	return *this;
}

Cure::~Cure()
{
	
}

Cure*	Cure::clone() const
{
	Cure	*cure;

	try
	{
		cure = new Cure;
	}
	catch(const std::bad_alloc& b)
	{
		std::cerr << b.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
	return cure;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << "\'s wounds *" << std::endl;
}
