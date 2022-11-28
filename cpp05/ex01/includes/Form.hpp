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

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		const std::string	name;
		bool				sign;
		const int			sign_grade;
		const int			exe_grade;
	
	public :
		Form();
		Form(const std::string &_name, const int &_sign_grade, const int &_exe_grade);
		Form(const Form &_form);
		Form&	operator=(Form &_form);
		~Form();

		std::string	getName() const;
		bool		getSign() const;
		int			getSigngrade() const;
		int			getExegrade() const;

		void		beSigned(const Bureaucrat& _bureaucrat);

		class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream&	operator<<(std::ostream &ostrm, const Form &_form);

#endif
