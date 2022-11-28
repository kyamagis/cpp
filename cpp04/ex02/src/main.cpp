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
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}
	std::cout << "------------------------------" << std::endl;
	{	
		const Animal	*k[10];

		try
		{
			for(int i = 0; i < 5; i++)
				k[i] = new Dog();
			for(int i = 5; i < 10; i++)
				k[i] = new Cat();
		}
		catch(const std::bad_alloc &b)
		{
			std::cerr << b.what() << std::endl;
			std::exit(EXIT_FAILURE);
		}
		for(int i = 0; i < 10; i++)
			delete k[i];
	}
	std::cout << "------------------------------" << std::endl;
	{	
		Dog* dog1;

		try
		{
			dog1 = new Dog();
		}
		catch(const std::bad_alloc &b)
		{
			std::cerr << b.what() << std::endl;
			std::exit(EXIT_FAILURE);
		}

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
		try
		{
			cat1 = new Cat();
		}
		catch(const std::bad_alloc &b)
		{
			std::cerr << b.what() << std::endl;
			std::exit(EXIT_FAILURE);
		}

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

	// const Animal a;
	// const Animal* animal = new Animal();
	// delete animal;

	return 0;
}
