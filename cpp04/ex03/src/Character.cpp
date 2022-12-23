/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:34:17 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/25 23:13:23 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character(): name("nemo")
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	
}

Character::Character(const std::string	&_name): name(_name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character &_character): name(_character.name)
{
	*this = _character;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}

Character&	Character::operator=(const Character &_character)
{
	if (this != &_character)
	{
		for (int i = 0; i < 4; i++)
		{	
			if (this->inventory[i])
				delete this->inventory[i];
			if (_character.inventory[i])
				this->inventory[i] = _character.inventory[i]->clone();
		}
	}
	return *this;
}

std::string const & Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria* m)
{
	if (!m || (m->getType() != "cure" && m->getType() != "ice"))
	{
		std::cerr << "Unexisting Materia" << std::endl;
		return ;
	}
	int	i = 0;

	while (this->inventory[i] && i < 4)
		i++;
	if (3 < i)
	{
		std::cerr << "Character inventory is full" << std::endl;
		return ;
	}
	this->inventory[i] = m;
	//std::cout << this->getName() << " equiped " << m->getType() << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || 3 < idx)
	{
		std::cerr << "Can not unequip because idx is over range(0 ~ 3)" << std::endl;
		return ;
	}
	if (!this->inventory[idx])
		return ;
	this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || 3 < idx)
	{
		std::cerr << "Can not use because idx is over range(0 ~ 3)" << std::endl;
		return ;
	}
	if (!this->inventory[idx])
	{
		std::cerr << "This inventory do not set" << std::endl;
		return ;
	}
	this->inventory[idx]->use(target);
}
