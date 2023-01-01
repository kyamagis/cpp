/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/18 20:37:50 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class	Form;

class	PresidentialPardonForm: public Form
{
	private:
		std::string	_target;
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm);
	
	public :
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm &presidentialPardonForm);
		virtual ~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;
};

#endif
