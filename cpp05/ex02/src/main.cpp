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
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

void	presidentialPardonForm_test1()
{
	{
		PresidentialPardonForm	presidentialPardonForm("Shinji");
		Bureaucrat				bureaucrat("Gendou");

		bureaucrat.executeForm(presidentialPardonForm);
		std::cout << std::endl;
	}

	{
		PresidentialPardonForm	presidentialPardonForm("Shinji");
		Bureaucrat				bureaucrat("Gendou", 25);

		bureaucrat.executeForm(presidentialPardonForm);
		std::cout << std::endl;
	}

	{
		PresidentialPardonForm	presidentialPardonForm("Shinji");
		Bureaucrat				bureaucrat("Gendou", 5);

		bureaucrat.executeForm(presidentialPardonForm);
		std::cout << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
}

void	robotomyRequestForm_test1()
{
	{
		RobotomyRequestForm	robotomyRequestForm("Quattro");
		Bureaucrat				bureaucrat("Kamille");

		bureaucrat.executeForm(robotomyRequestForm);
		std::cout << std::endl;
	}

	{
		RobotomyRequestForm	robotomyRequestForm("Quattro");
		Bureaucrat				bureaucrat("Kamille", 72);

		bureaucrat.executeForm(robotomyRequestForm);
		std::cout << std::endl;
	}

	{
		RobotomyRequestForm	robotomyRequestForm("Quattro");
		Bureaucrat				bureaucrat("Kamille", 45);

		bureaucrat.executeForm(robotomyRequestForm);
		std::cout << std::endl;
	}

	{
		RobotomyRequestForm	robotomyRequestForm("Quattro");
		Bureaucrat				bureaucrat("Kamille", 45);

		bureaucrat.executeForm(robotomyRequestForm);
		std::cout << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
}

void	shrubberyCreationForm_test1()
{
	{
		ShrubberyCreationForm	shrubberyCreationForm("Berny");
		Bureaucrat				bureaucrat("Al");

		bureaucrat.executeForm(shrubberyCreationForm);
		std::cout << std::endl;
	}

	{
		ShrubberyCreationForm	shrubberyCreationForm("Berny");
		Bureaucrat				bureaucrat("Al", 145);

		bureaucrat.executeForm(shrubberyCreationForm);
		std::cout << std::endl;
	}

	{
		ShrubberyCreationForm	shrubberyCreationForm("Berny");
		Bureaucrat				bureaucrat("Al", 137);

		bureaucrat.executeForm(shrubberyCreationForm);
		std::cout << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
}

int	main(void)
{
	std::cout << "\x1b[32mPresidentialPardonForm_test1\033[m" << std::endl;
	presidentialPardonForm_test1();
	std::cout << "\x1b[32mrobotomyRequestForm_test1\033[m" << std::endl;
	robotomyRequestForm_test1();
	std::cout << "\x1b[32mshrubberyCreationForm_test1\033[m" << std::endl;
	shrubberyCreationForm_test1();

	return 0;
}
