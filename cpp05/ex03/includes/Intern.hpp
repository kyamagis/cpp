/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/18 20:46:32 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	Form;

class	Intern
{
	private:
		Intern(const Intern &intern);

	public :
		Intern();
		Intern&	operator=(Intern &intern);
		~Intern();

		Form	*makeForm(const std::string &form_name, const std::string &form_target);

		void	executeForm(Form const & form);
		Form	*allocatePresidentForm(const std::string &form_target);
		Form	*allocateRobotomyForm(const std::string &form_target);
		Form	*allocateShrubberyForm(const std::string &form_target);
		Form	*ThrowNotMatchForm(const std::string &form_target);
};

#endif
