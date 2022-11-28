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
#include "../includes/Intern.hpp"

void	presidentialPardonForm_test1()
{
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Shinji");
		if (rrf != NULL)
		{
			Bureaucrat bureaucrat("Gendou");
			bureaucrat.executeForm(*rrf);
			delete rrf;
		}
		std::cout << std::endl;
	}

	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Shinji");
		if (rrf != NULL)
		{
			Bureaucrat bureaucrat("Gendou", 25);
			bureaucrat.executeForm(*rrf);
			delete rrf;
		}
		std::cout << std::endl;
	}

	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Shinji");
		if (rrf != NULL)
		{
			Bureaucrat bureaucrat("Gendou", 5);
			bureaucrat.executeForm(*rrf);
			delete rrf;
		}
		std::cout << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
}

void	robotomyRequestForm_test1()
{
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Quattro");
		if (rrf != NULL)
		{
			Bureaucrat bureaucrat("Kamille");
			bureaucrat.executeForm(*rrf);
			delete rrf;
		}
		std::cout << std::endl;
	}

	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Quattro");
		if (rrf != NULL)
		{
			Bureaucrat bureaucrat("Kamille", 72);
			bureaucrat.executeForm(*rrf);
			delete rrf;
		}
		std::cout << std::endl;
	}

	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Quattro");
		if (rrf != NULL)
		{
			Bureaucrat bureaucrat("Kamille", 45);
			bureaucrat.executeForm(*rrf);
			delete rrf;
		}
		std::cout << std::endl;
	}

	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Quattro");
		if (rrf != NULL)
		{
			Bureaucrat bureaucrat("Kamille", 45);
			bureaucrat.executeForm(*rrf);
			delete rrf;
		}
		std::cout << std::endl;
	}	
	std::cout << "-----------------------------------" << std::endl;
}

void	shrubberyCreationForm_test1()
{
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Berny");
		if (rrf != NULL)
		{
			Bureaucrat bureaucrat("Al");
			bureaucrat.executeForm(*rrf);
			delete rrf;
		}
		std::cout << std::endl;
	}

	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Berny");
		if (rrf != NULL)
		{
			Bureaucrat bureaucrat("Al", 145);
			bureaucrat.executeForm(*rrf);
			delete rrf;
		}
		std::cout << std::endl;
	}

	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Berny");
		if (rrf != NULL)
		{
			Bureaucrat bureaucrat("Al", 137);
			bureaucrat.executeForm(*rrf);
			delete rrf;
		}
		std::cout << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
}

void	Nothingform_test1(void)
{
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Nothing", "Chirico");
		if (rrf != NULL)
		{
			Bureaucrat bureaucrat("Epsilon", 137);
			bureaucrat.executeForm(*rrf);
			delete rrf;
		}
		std::cout << std::endl;
	}
}

int	main(void)
{
	std::cout << "\x1b[32mPresidentialPardonForm_test1\033[m" << std::endl;
	presidentialPardonForm_test1();
	std::cout << "\x1b[32mrobotomyRequestForm_test1\033[m" << std::endl;
	robotomyRequestForm_test1();
	std::cout << "\x1b[32mshrubberyCreationForm_test1\033[m" << std::endl;
	shrubberyCreationForm_test1();
	std::cout << "\x1b[32mNothingform_test1\033[m" << std::endl;
	Nothingform_test1();

	return 0;
}
