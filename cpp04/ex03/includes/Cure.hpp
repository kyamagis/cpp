/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:57:25 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/28 21:12:59 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class	ICharacter;
class	Cure : public AMateria
{
	private: 

	public :
		Cure();
		Cure(const Cure &cure);
		virtual ~Cure();
		Cure&	operator=(const Cure &cure);

		Cure*	clone() const;
		void	use(ICharacter& target);

};

#endif