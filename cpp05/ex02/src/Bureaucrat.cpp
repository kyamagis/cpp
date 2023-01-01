/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:16:36 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/18 14:05:50 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("nemo"), _grade(150){}

Bureaucrat::Bureaucrat(const std::string &name): _name(name), _grade(150){}

Bureaucrat::Bureaucrat(const std::string &name, const int grade): _name(name)
{
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat): _name(bureaucrat._name)
{
	*this = bureaucrat;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	if (this != &bureaucrat)
		this->setGrade(bureaucrat._grade);
	return *this;
}

Bureaucrat::~Bureaucrat(){}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::setGrade(const int &grade)
{
	if (grade < 1)
	{
		this->_grade = 1;
		throw Bureaucrat::GradeTooHighException();
	}
	else if (150 < grade)
	{
		this->_grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
	else
		this->_grade = grade;
}

void	Bureaucrat::incrementGrade()
{
	this->setGrade(this->_grade - 1);
}

void	Bureaucrat::decrementGrade()
{
	this->setGrade(this->_grade + 1);
}

// Bureaucrat&	Bureaucrat::operator++()
// {
// 	this->setGrade(this->grade - 1);
// 	return *this;
// }

// Bureaucrat&	Bureaucrat::operator--()
// {
// 	this->setGrade(this->grade + 1);
// 	return *this;
// }

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Too high Grade";
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Too low Grade";
}

const char	*Bureaucrat::GradeTooLowThanExeGradeException::what(void) const throw()
{
	return "Grade is lower than execution grade";
}

std::ostream &operator<<(std::ostream &ostrm, const Bureaucrat &bureaucrat)
{
	return ostrm << bureaucrat.getName() << ", bureaucrat grade " 
					<< bureaucrat.getGrade() << "."<< std::endl;
}

static void	put_form_err(const std::string &reason)
{
	std::cerr << reason << "." << std::endl;
}

void		Bureaucrat::signForm(const Form &form)
{
	if (form.getSign() == false)
	{
		std::cerr << this->_name << " could not sign "
				<< form.getName()
				<< " because ";
		if (form.getSigngrade() < 1 || 150 < form.getSigngrade())
			put_form_err("Invalid sign grade");
		else
			put_form_err("grade is low");
		return ;
	}
	std::cout << this->_name << " signed " << form.getName() << std::endl;
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
