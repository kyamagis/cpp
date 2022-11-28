/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:57:19 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/28 21:12:53 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Ice : public AMateria
{
	private:
		
	public :
		Ice();
		Ice(const Ice &ice);
		virtual ~Ice();
		Ice&	operator=(const Ice &ice);

		Ice*	clone() const;
		void	use(ICharacter& target);

};

#endif