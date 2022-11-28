/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:57:32 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/28 21:13:03 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Character: public ICharacter
{
	private :
		const std::string	name;
		AMateria			*inventory[4];

	public:
		Character();
		Character(const std::string	&_name);
		Character(const Character &_character);
		virtual ~Character();
		Character&	operator=(const Character &_character);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif