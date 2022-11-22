/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:52:04 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/11 14:01:43 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << "\n";
	std::cout << "I love having extra bacon "
			<< "for my 7XL-double-cheese-triple-pickle-specialketchup burger\n"
			<< "I really do!" << "\n\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << "\n";
	std::cout << "I cannot believe adding extra bacon "
			<< "costs more money. You did not put enough bacon in my burger!\n"
			<<" If you did, I would not be asking for more!" << "\n\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << "\n";
	std::cout << "I think I deserve to have some extra bacon for free.\n"
			<< "I've been coming for years whereas you started working here since last month." << "\n\n";
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << "\n";
	std::cout << "This is unacceptable, I want to speak to the manager now." << "\n\n";
}

void	Harl::complain(std::string level)
{
	const std::string	_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4)
	{
		if (level == _levels[i])
			break ;
		i++;
	}

	switch (i)
	{
		case(0):
			this->debug();
		case(1):
			this->info();
		case(2):
			this->warning();
		case(3):
			this->error();
			return ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			return ;
	}
}