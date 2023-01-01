/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:16:36 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/18 18:09:27 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): \
	Form("RobotomyRequestForm", 72, 45), _target("nemo"){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): \
	Form("RobotomyRequestForm", 72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm): \
	Form("RobotomyRequestForm", 72, 45), _target(robotomyRequestForm._target){}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyRequestForm)
{
	if (this != &robotomyRequestForm)
		this->_target = robotomyRequestForm._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->isSigngradeHighterThanGarade(executor) == false)
		return ;
	std::cout << this->_target << " DURRRRRRRRRRRRRRRRRRRRRRRRRRRRRy...." << std::endl;
	struct timeval	tv;
	if (gettimeofday(&tv, NULL) == -1)
		return ;
	size_t	random = tv.tv_usec * rand();
	if (random % 2 == 0)
		std::cout << this->_target<< " has been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomy failed" << std::endl;
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}
