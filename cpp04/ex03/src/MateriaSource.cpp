/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:55:45 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/25 23:11:51 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		this->ma_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
	for (int i = 0; i < 4; i++)
	{
		if (materiaSource.ma_inventory[i])
			this->ma_inventory[i] = materiaSource.ma_inventory[i]->clone();
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->ma_inventory[i];
}

MateriaSource&	MateriaSource::operator=(const MateriaSource &materiaSource)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->ma_inventory[i])
			delete this->ma_inventory[i];
		if (materiaSource.ma_inventory[i])
			this->ma_inventory[i] = materiaSource.ma_inventory[i]->clone();
	}
	return *this;
}


void	MateriaSource::learnMateria(AMateria* amateria)
{
	if (amateria == NULL)
		return ;
	int	i = 0;
	while (this->ma_inventory[i] && i < 4)
		i++;
	if (3 < i)
	{
		std::cerr << "MateriaSource inventory is full" << std::endl;
		return ;
	}
	this->ma_inventory[i] = amateria;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int	i = 0;

	while (this->ma_inventory[i] && this->ma_inventory[i]->getType() != type && i < 4)
		i++;
	if (3 < i && !this->ma_inventory[i])
	{	
		std::cerr << "Not founnd " << type << std::endl;
		return NULL;
	}
	return this->ma_inventory[i]->clone();
}