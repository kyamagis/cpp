/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/10 23:04:50 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Form.hpp"

class	ShrubberyCreationForm: public Form
{
	private:
		std::string	target;
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &_shrubberyCreationForm);
	
	public :
		ShrubberyCreationForm(const std::string &_target);
		ShrubberyCreationForm&	operator=(ShrubberyCreationForm &_shrubberyCreationForm);
		virtual ~ShrubberyCreationForm();

		void	execute(Bureaucrat const & executor) const;
};

#endif
