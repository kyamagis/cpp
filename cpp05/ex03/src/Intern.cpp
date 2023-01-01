/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:16:36 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/18 14:05:50 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &intern)
{
	(void)intern;
}

Intern&	Intern::operator=(Intern &intern)
{
	(void)intern;
	return *this;
}

Intern::~Intern(){}

Form	*Intern::allocatePresidentForm(const std::string &form_target)
{
	Form	*form = NULL;

	try
	{	
		form = new PresidentialPardonForm(form_target);
	}
	catch (const std::bad_alloc &e)
	{
		std::cerr << e.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
	return (form);
}

Form	*Intern::allocateRobotomyForm(const std::string &form_target)
{
	Form	*form = NULL;

	try
	{
		form = new RobotomyRequestForm(form_target);
	}
	catch (const std::bad_alloc &e)
	{
		std::cerr << e.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
	return (form);
}

Form	*Intern::allocateShrubberyForm(const std::string &form_target)
{
	Form	*form = NULL;

	try
	{
		form = new ShrubberyCreationForm(form_target);
	}
	catch (const std::bad_alloc &e)
	{
		std::cerr << e.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
	return (form);
}

Form	*Intern::ThrowNotMatchForm(const std::string &form_target)
{
	(void)form_target;
	std::cout << "Not match form" << std::endl;
	return NULL ;
}

Form	*Intern::makeForm(const std::string &form_name, const std::string &form_target)
{
	int idx = ("presidential pardon" == form_name) * 1 + \
				("robotomy request" == form_name) * 2 + \
				("shrubbery creation" == form_name) * 3; 
	Form	*(Intern::* froms[4])(const std::string&) = \
			{&Intern::ThrowNotMatchForm, \
			&Intern::allocatePresidentForm, \
			&Intern::allocateRobotomyForm, \
			&Intern::allocateShrubberyForm};
	return (this->*froms[idx])(form_target);
}
