/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:34:44 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/16 17:35:35 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap: virtual public ClapTrap
{
	private:
	
	public :
		FragTrap();
		FragTrap(const std::string &_Name);
		FragTrap(const FragTrap &_fragtrap);
		FragTrap&	operator=(FragTrap &_fragtrap);
		~FragTrap();

		void highFivesGuys(void);
};

#endif