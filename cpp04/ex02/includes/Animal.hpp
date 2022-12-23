/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/28 21:14:34 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <cstdlib>

class	Animal
{
	protected :
		std::string type;

	public :
		Animal();
		Animal(const std::string &_type);
		Animal(const Animal &_Animal);
		Animal&	operator=(const Animal &_Animal);
		virtual ~Animal();

		virtual void makeSound()const = 0;
		std::string	getType()const;
};

#endif
