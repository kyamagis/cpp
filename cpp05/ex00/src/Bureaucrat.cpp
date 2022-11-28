/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:16:36 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/16 14:16:36 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("nemo")
{
	this->grade = 150;
}

Bureaucrat::Bureaucrat(const std::string &_name): name(_name)
{
	this->grade = 150;
}

Bureaucrat::Bureaucrat(const std::string &_name, const int grade): name(_name)
{
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &_bureaucrat):name(_bureaucrat.name)
{
	this->setGrade(_bureaucrat.grade);
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat &_bureaucrat)
{
	this->setGrade(_bureaucrat.grade);
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	
}

std::string	Bureaucrat::getName() const
{
	return this->name;
}

int	Bureaucrat::getGrade() const
{
	return this->grade;
}

void	Bureaucrat::setGrade(const int &_grade)
{
	if (_grade < 1)
	{
		this->grade = 1;
		throw Bureaucrat::GradeTooHighException();
	}
	else if (150 < _grade)
	{
		this->grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
	else
		this->grade = _grade;
}

void	Bureaucrat::incrementGrade()
{
	this->setGrade(this->grade - 1);
}

void	Bureaucrat::decrementGrade()
{
	this->setGrade(this->grade + 1);
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

std::ostream &operator<<(std::ostream &ostrm, const Bureaucrat &_bureaucrat)
{
	return ostrm << _bureaucrat.getName() << ", bureaucrat grade " 
					<< _bureaucrat.getGrade() << "."<< std::endl;
}