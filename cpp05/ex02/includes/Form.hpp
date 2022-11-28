/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/18 14:02:32 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	protected:
		const std::string	name;
		bool				sign;
		const int			sign_grade;
		const int			exe_grade;
		Form();
		Form(const std::string &_name, const int &_sign_grade, const int &_exe_grade);
	
	public :
		Form(const Form &_form);
		Form&	operator=(Form &_form);
		virtual ~Form();

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
		
		class	GradeTooLowThanSignGradeException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		virtual void	execute(Bureaucrat const &executor) const = 0;
		bool			isSigngradeHighterThanGarade(Bureaucrat const &executor) const;
};

std::ostream&	operator<<(std::ostream &ostrm, const Form &_form);

#endif
