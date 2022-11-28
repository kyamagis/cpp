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

#include "../includes/Bureaucrat.hpp"

void	bureaucrat_nemo()
{
	Bureaucrat	nemo;

	std::cout << nemo;
	try
	{
		nemo.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << nemo;
	try
	{
		nemo.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << nemo << std::endl;
}

void	bureaucrat_mandarin()
{
	Bureaucrat	mandarin("madarin", 1);

	std::cout << mandarin;
	try
	{
		mandarin.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << mandarin;
	try
	{
		mandarin.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << mandarin  << std::endl;
}

void	bureaucrat_copy_constructor()
{
	Bureaucrat	poet("to_ho", 1);
	Bureaucrat	to_ho = poet;

	std::cout << to_ho;
	try
	{
		to_ho.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << to_ho;
	try
	{
		to_ho.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << to_ho  << std::endl;
}

void	bureaucrat_ope_constructor()
{
	Bureaucrat	poet("ri_haku", 150);
	Bureaucrat	ri_haku;

	ri_haku = poet;
	std::cout << ri_haku;
	try
	{
		ri_haku.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << ri_haku;
	try
	{
		ri_haku.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << ri_haku << std::endl;
}

int	main(void)
{
	bureaucrat_nemo();
	bureaucrat_mandarin();
	bureaucrat_copy_constructor();
	bureaucrat_ope_constructor();
	return 0;
}
