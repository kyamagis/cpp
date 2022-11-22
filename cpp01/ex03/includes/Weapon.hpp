/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/11 19:29:50 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iomanip>
#include <iostream>

class	Weapon
{
	private:
		std::string	type;

	public :
		Weapon();
		Weapon(std::string _type);
		~Weapon();

		void				setType(std::string	_type);
		std::string const	&getType();
};

/* 

std::string const	&getType() const;
2nd const guarantee not chage argument 

void	f(char &c)
{
	c = 'p';
}

void	F(char *c)
{
	*c = 'p';
}

int		main()
{
	char	c = 'x';
	f(c);
	F(&c);
} */


#endif