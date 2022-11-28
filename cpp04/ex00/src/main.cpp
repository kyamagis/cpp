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
#include <cstdlib>

int main()
{
	{
		const Animal* meta;
		const Animal* j;
		const Animal* i;
		try
		{
			meta = new Animal();
			j = new Dog();
			i = new Cat();
		}
		catch(const std::bad_alloc &b)
		{
			std::cerr << b.what() << std::endl;
			std::exit(EXIT_FAILURE);
		}
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl << "----------------\n" << std::endl; 
	{
		const WrongAnimal* wronganimal;
		const WrongAnimal* wrongcat;
		try
		{
			wronganimal = new WrongAnimal();
			wrongcat = new WrongCat();
		}
		catch(const std::bad_alloc &b)
		{
			std::cerr << b.what() << std::endl;
			std::exit(EXIT_FAILURE);
		}
		wrongcat->makeSound();
		wronganimal->makeSound();
	
		delete wrongcat;
		delete wronganimal;
	}

	return 0;
}

/* 
std::cerr << "___________[CorrectAnimal]_________________________" << std::endl;
{
const Animal *meta = new Animal();
std::cout << meta->getType() << std::endl;
meta->makeSound();
delete meta;
std::cerr << "____________________________________" << std::endl;

const Animal *j = new Dog();
std::cout << j->getType() << std::endl;
j->makeSound();
delete j;
std::cerr << "____________________________________" << std::endl;

const Animal *i = new Cat();
std::cout << i->getType() << std::endl;
i->makeSound();
delete i;
}

std::cerr << "___________[WrongAnimal]_________________________" << std::endl;
{
const WrongAnimal *meta = new WrongAnimal();
std::cout << meta->getType() << std::endl;
meta->makeSound();
delete meta;
std::cerr << "____________________________________" << std::endl;

const WrongAnimal *i = new WrongCat();
std::cout << i->getType() << std::endl;
i->makeSound();
delete i;
} */