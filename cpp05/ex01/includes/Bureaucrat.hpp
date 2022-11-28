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

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class	Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	
	public :
		Bureaucrat();
		Bureaucrat(const std::string &_name);
		Bureaucrat(const std::string &_name, const int grade);
		Bureaucrat(const Bureaucrat &_bureaucrat);
		Bureaucrat&	operator=(Bureaucrat &_bureaucrat);
		~Bureaucrat();

		std::string	getName() const;
		int			getGrade() const;
		void		setGrade(const int &_grade);

		void		incrementGrade();
		void		decrementGrade();

		void		signForm(Form &_from);

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

std::ostream &operator<<(std::ostream &ostrm, const Bureaucrat &_bureaucrat);

#endif
