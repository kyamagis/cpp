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

#include "../includes/ScavTrap.hpp"

int	main(void)
{
	ScavTrap	hero;
	ScavTrap	enemy1("Kefka");
	ScavTrap	enemy2 = enemy1;
	ScavTrap	enemy3;

	enemy3 = enemy2;

	std::cout << "-------------------------\n";
	std::cout << hero;
	hero.attack("Kefka");
	hero.guardGate();
	hero.takeDamage(hero.get_hit_point());
	hero.guardGate();
	hero.attack("Kefka");
	hero.beRepaired(100);
	std::cout << hero;
	std::cout << "-------------------------\n";
	std::cout << enemy2;
	std::cout << enemy3;
	std::cout << enemy1;
	std::cout << "-------------------------\n";
	enemy1.takeDamage(hero.get_attack_damage());
	std::cout << enemy1;
	std::cout << "-------------------------\n";
	enemy1.beRepaired(100);
	std::cout << enemy1;
	std::cout << "-------------------------\n";
	enemy1.set_energy_point(0);
	std::cout << enemy1;
	std::cout << "-------------------------\n";
	enemy1.attack("Kefka");
	std::cout << enemy1;
	std::cout << "-------------------------\n";
	enemy1.beRepaired(100);
	std::cout << enemy1;

	return 0;
}
