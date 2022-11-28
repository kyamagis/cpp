/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/18 13:58:07 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class	PresidentialPardonForm: public Form
{
	private:
		std::string	target;
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &_presidentialPardonForm);
	
	public :
		PresidentialPardonForm(const std::string &_target);
		PresidentialPardonForm&	operator=(PresidentialPardonForm &_presidentialPardonForm);
		virtual ~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;
};

#endif
