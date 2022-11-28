/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/10 23:04:50 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	protected :
		std::string type;

	public :
		Animal();
		Animal(std::string &_type);
		Animal(Animal &_Animal);
		Animal&	operator=(Animal &_Animal);
		virtual ~Animal();

		virtual void makeSound()const;
		std::string	getType()const;
};

#endif
