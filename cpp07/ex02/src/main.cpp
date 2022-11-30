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

#include "../includes/Array.hpp"

#define MAX_VAL 750

int	main()
{
	try
	{
		try
		{
			Array<char>	a;
			a[1];
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			Array<char>	b(5);
			std::cout << "size of b is " << b.size() << std::endl;

			Array<char>	c;
			c = b;
			for (unsigned int i = 0; i < b.size(); i++)
				b[i] = 'b';
			for (unsigned int i = 0; i < b.size(); i++)
				c[i] = 'c';
			std::cout << "b is ";
			for (unsigned int i = 0; i < b.size(); i++)
				std::cout << b[i];
			std::cout << std::endl;
			std::cout << "c is ";
			for (unsigned int i = 0; i < b.size(); i++)
				std::cout << c[i];
			std::cout << std::endl;

			Array<char>	d = c;
			std::cout << "d is ";
			for (unsigned int i = 0; i < b.size(); i++)
				std::cout << d[i];
			std::cout << std::endl;

			Array<int>	f(5);
			std::cout << "Initialize is value of f is ";
			for (unsigned int i = 0; i < f.size(); i++)
				std::cout << f[i];
			std::cout << std::endl;
			for (unsigned int i = 0; i < f.size(); i++)
				f[i] = 7;
			//f = f;
			std::cout << "Assigned is value of f is ";
			for (unsigned int i = 0; i < f.size(); i++)
				std::cout << f[i];
			std::cout << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "--------------------------" << std::endl;

		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
		return 0;
	}
	catch (std::bad_alloc &b)
	{
		std::cerr << b.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
}

/* __attribute__((destructor))
static void destructor(void)
{
	system("leaks -q ex02");
} */
