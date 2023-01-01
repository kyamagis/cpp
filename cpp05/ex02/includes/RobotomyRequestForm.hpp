/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/18 18:07:43 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <cstdlib>
#include <sys/time.h>
#include "Form.hpp"

class	RobotomyRequestForm: public Form
{
	private:
		std::string	_target;
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm);
	
	public :
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm &robotomyRequestForm);
		virtual ~RobotomyRequestForm();

		void	execute(Bureaucrat const & executor) const;
};

#endif
