/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:57:03 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/28 21:12:38 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*ma_inventory[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &materiaSource);
		virtual	~MateriaSource();
		MateriaSource&	operator=(const MateriaSource &materiaSource);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif