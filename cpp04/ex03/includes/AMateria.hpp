/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/25 14:28:58 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include <cstdlib>

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria();
		AMateria(const AMateria &type);
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria&	operator=(const AMateria &a);

		std::string const & getType() const;
	
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif
