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
	std::cout << "I love having extra bacon "
			<< "for my 7XL-double-cheese-triple-pickle-specialketchup "
			<< "burger. I really do!" << "\n\n";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon "
			<< "costs more money. You did not put enough bacon in my burger!"
			<<" If you did, I would not be asking for more!" << "\n\n";
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I have been coming for "
			<< "years whereas you started working here since last month." << "\n\n";
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << "\n";
}

void	Harl::complain(std::string level)
{
	const std::string	_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::* levels[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == _levels[i])
		{
			(this->*levels[i])();
			return ;
		}
	}
}