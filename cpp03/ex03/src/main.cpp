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

#include "../includes/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	Tina;
	ScavTrap	Hero;
	DiamondTrap	Emperor;
	DiamondTrap	enemy1("Kefka");
	DiamondTrap	enemy2 = enemy1;
	DiamondTrap	enemy3;

	enemy3 = enemy2;

	std::cout << "-------------------------\n";
	Emperor.whoAmI();
	std::cout << Emperor;
	Emperor.attack("Kzinssie");
	Emperor.takeDamage(Emperor.get_hit_point());
	Emperor.highFivesGuys();
	Emperor.attack("Kzinssie");
	Emperor.beRepaired(100);
	std::cout << Emperor;
	std::cout << "-------------------------\n";
	std::cout << enemy2;
	std::cout << enemy3;
	std::cout << enemy1;
	std::cout << "-------------------------\n";
	enemy1.takeDamage(Emperor.get_attack_damage());
	std::cout << enemy1;
	std::cout << "-------------------------\n";
	enemy1.beRepaired(100);
	std::cout << enemy1;
	std::cout << "-------------------------\n";
	enemy1.highFivesGuys();
	enemy1.set_energy_point(0);
	enemy1.highFivesGuys();
	std::cout << enemy1;
	std::cout << "-------------------------\n";
	enemy1.attack("Kzinssie");
	std::cout << enemy1;
	std::cout << "-------------------------\n";
	enemy1.beRepaired(100);
	std::cout << enemy1;

	return 0;
}

/* std::cout << Emperor.get_hit_point() << std::endl;
	std::cout << Emperor.get_energy_point() << std::endl;
	std::cout << Emperor.get_attack_damage() << std::endl;


	std::cout << "Hit point = "
			<< (Emperor.get_hit_point() == Tina.get_hit_point()) << std::endl;
	std::cout << "Energy point = "
			<< (Emperor.get_energy_point() == Hero.get_energy_point()) << std::endl;
	std::cout << "Attack_damage = "
			<< (Emperor.get_attack_damage() == Tina.get_attack_damage()) << std::endl;

	std::cout << "Hit point = "
			<< (enemy3.get_hit_point() == Tina.get_hit_point()) << std::endl;
	std::cout << "Energy point = "
			<< (enemy3.get_energy_point() == Hero.get_energy_point()) << std::endl;
	std::cout << "Attack_damage = "
			<< (enemy3.get_attack_damage() == Tina.get_attack_damage()) << std::endl; */
