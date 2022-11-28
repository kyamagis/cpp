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

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	protected :
		std::string type;

	public :
		WrongAnimal();
		WrongAnimal(std::string &_type);
		WrongAnimal(WrongAnimal &_WrongAnimal);
		WrongAnimal&	operator=(WrongAnimal &_WrongAnimal);
		~WrongAnimal();

		void makeSound()const;
		std::string	getType()const;
};

#endif
