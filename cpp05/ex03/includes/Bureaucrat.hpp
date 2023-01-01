/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/18 14:04:52 by kyamagis         ###   ########.fr       */
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
		const std::string	_name;
		int					_grade;
	
	public :
		Bureaucrat();
		Bureaucrat(const std::string &name);
		Bureaucrat(const std::string &name, const int grade);
		Bureaucrat(const Bureaucrat &bureaucrat);
		Bureaucrat&	operator=(const Bureaucrat &bureaucrat);
		~Bureaucrat();

		std::string	getName() const;
		int			getGrade() const;
		void		setGrade(const int &grade);

		void	incrementGrade();
		void	decrementGrade();

		void		signForm(const Form &from);

		// Bureaucrat&	operator++();
		// Bureaucrat&	operator--();

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

		class	GradeTooLowThanExeGradeException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		void	executeForm(Form const & form);
};

std::ostream &operator<<(std::ostream &ostrm, const Bureaucrat &_bureaucrat);

#endif
