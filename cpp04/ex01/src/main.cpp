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

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	try
	{
		{
			const Animal* j = new Dog();
			const Animal* i = new Cat();

			delete j;
			delete i;
		}
		std::cout << "------------------------------" << std::endl;
		{	
			const Animal	*k[10];

			for(int i = 0; i < 5; i++)
				k[i] = new Dog();
			for(int i = 5; i < 10; i++)
				k[i] = new Cat();
			for(int i = 0; i < 10; i++)
				delete k[i];
		}
		std::cout << "------------------------------" << std::endl;
		{	
			Dog* dog1;

			dog1 = new Dog();
			Dog dog2(*dog1);
			Dog dog3;

			dog3 = *dog1;
			delete dog1;
			std::cout << dog2.getIdea(0) << std::endl;
			std::cout << dog3.getIdea(0) << std::endl << std::endl;
			
		}
		std::cout << "------------------------------" << std::endl;
		{
			Cat* cat1;

			cat1 = new Cat();

			Cat cat2 = *cat1;
			Cat cat3;

			cat3 = *cat1;
			delete cat1;
			std::cout << cat2.getIdea(0) << std::endl;
			std::cout << cat3.getIdea(0) << std::endl << std::endl;
		}
		std::cout << "------------------------------" << std::endl;
		{
			Dog basic;
			{
				Dog tmp = basic;
			}
		}
	}
	catch (const std::bad_alloc &e)
	{
		std::cerr << e.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
	return 0;
}
