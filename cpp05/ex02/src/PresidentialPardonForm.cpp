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
	Form("PresidentialPardonForm", 25, 5), _target("nemo"){}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): \
	Form("PresidentialPardonForm", 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm): \
	Form("PresidentialPardonForm", 25, 5), _target(presidentialPardonForm._target){}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialPardonForm)
{
	if (this != &presidentialPardonForm)
		this->_target = presidentialPardonForm._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->isSigngradeHighterThanGarade(executor) == false)
		return ;
	std::cout << this->_target<< " has been pardoned by Zaphod Beeblebrox" << std::endl;
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}
