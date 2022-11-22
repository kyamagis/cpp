/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:54:32 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/08 16:11:01 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	hero;
	ClapTrap	slime1("Slime");
	ClapTrap	slime2 = slime1;
	ClapTrap	slime3;

	slime3 = slime2;

	std::cout << "-------------------------\n";
	std::cout << hero;
	hero.attack("Slime");
	hero.takeDamage(hero.get_hit_point());
	hero.attack("Slime");
	hero.beRepaired(100);
	std::cout << "-------------------------\n";
	std::cout << slime2;
	std::cout << slime3;
	std::cout << slime1;
	std::cout << "-------------------------\n";
	slime1.takeDamage(hero.get_attack_damage());
	std::cout << slime1;
	std::cout << "-------------------------\n";
	slime1.beRepaired(100);
	std::cout << slime1;
	std::cout << "-------------------------\n";
	slime1.set_energy_point(0);
	std::cout << slime1;
	std::cout << "-------------------------\n";
	slime1.attack("Slime");
	std::cout << slime1;
	std::cout << "-------------------------\n";
	slime1.beRepaired(100);
	std::cout << slime1;

	return 0;
}
