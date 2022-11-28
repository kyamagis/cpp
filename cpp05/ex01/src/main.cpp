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
#include "../includes/Form.hpp"

void	unsigned_test()
{
	Bureaucrat	nemo;
	Form		form;

	std::cout << nemo;
	std::cout << form;
	try
	{
		form.beSigned(nemo);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form;
	try
	{
		nemo.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------" <<std::endl;
}

void	signed_test()
{
	Bureaucrat	mandarin("mandarin", 1);
	Form		form("E project", 1 , 1);

	std::cout << mandarin;
	std::cout << form;
	try
	{
		form.beSigned(mandarin);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form;
	try
	{
		mandarin.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------" <<std::endl;
}

void	too_low()
{
	try
	{
		Form	form("Operation V", 160 , 1);
		std::cout << form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------" <<std::endl;
}

void	too_hight()
{
	try
	{
		Form	form("Operation Footprints", 0 , 1);
		std::cout << form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------" <<std::endl;
}

int	main(void)
{
	std::cout << "\x1b[32munsigned_test\033[m" << std::endl;
	unsigned_test();
	std::cout << "\x1b[32msigned_test\033[m" << std::endl;
	signed_test();
	std::cout << "\x1b[32mtoo_low\033[m" << std::endl;
	too_low();
	std::cout << "\x1b[32mtoo_hight\033[m" << std::endl;
	too_hight();
	return 0;
}
