/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:16:36 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/18 20:38:43 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): \
	Form("ShrubberyCreationForm", 145, 137), _target("nemo"){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): \
	Form("ShrubberyCreationForm", 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm): \
	Form("ShrubberyCreationForm", 145, 137), _target(shrubberyCreationForm._target){}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyCreationForm)
{
	if (this != &shrubberyCreationForm)
		this->_target = shrubberyCreationForm._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->isSigngradeHighterThanGarade(executor) == false)
		return ;
	std::ofstream	ofs;
	std::string file = this->_target + "_shrubbery";
	ofs.open(file.c_str());
	if (!ofs)
	{	
		std::cout << "Failed to open outfile" << std::endl;
		return ;
	}

	ofs << "" << std::endl;
	ofs << "                                                     " << std::endl;
	ofs << "                       ki                            " << std::endl;
	ofs << "                       ki                            " << std::endl;
	ofs << "         kikikikikikikikikikikikikikiki              " << std::endl;
	ofs << "                     kikiki                          " << std::endl;
	ofs << "                   ki  ki  ki                        " << std::endl;
	ofs << "                 ki    ki    ki                      " << std::endl;
	ofs << "               ki      ki      ki                    " << std::endl;
	ofs << "             ki        ki        ki                  " << std::endl;
	ofs << "          ki           ki           ki               " << std::endl;
	ofs << "        ki             ki             ki             " << std::endl;
	ofs << "     ki                ki                ki          " << std::endl;
	ofs << "                       ki                            " << std::endl;
	ofs << "                       ki                            " << std::endl;
	ofs << "                                                     " << std::endl;

	ofs.close();
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}
