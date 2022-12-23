/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:34:13 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/16 14:44:56 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{	
	public :
		FragTrap();
		FragTrap(const std::string &_Name);
		FragTrap(const FragTrap &_fragtrap);
		FragTrap&	operator=(const FragTrap &_fragtrap);
		~FragTrap();

		void highFivesGuys(void);
};

#endif