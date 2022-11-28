/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:16:36 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/18 14:11:59 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): \
	Form("PresidentialPardonForm", 25, 5), target("nemo")
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &_target): \
	Form("PresidentialPardonForm", 25, 5), target(_target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &_presidentialPardonForm): \
	Form("PresidentialPardonForm", 25, 5), target(_presidentialPardonForm.target)
{

}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm &_presidentialPardonForm)
{
	this->target = _presidentialPardonForm.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->isSigngradeHighterThanGarade(executor) == false)
		return ;
	std::cout << this->target<< " has been pardoned by Zaphod Beeblebrox" << std::endl;
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}
