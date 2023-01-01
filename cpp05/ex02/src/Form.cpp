/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:16:36 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/18 14:03:51 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form(): _name("The form"), _sign(false), _sign_grade(1), _exe_grade(1){}

Form::Form(const std::string &name, const int &sign_grade, const int &exe_grade): \
	_name(name), _sign_grade(sign_grade), _exe_grade(exe_grade)
{
	if (this->_sign_grade < 1 || this->_exe_grade < 1)
		throw Form::GradeTooHighException();
	else if (150 < this->_sign_grade || 150 < this->_exe_grade)
		throw Form::GradeTooLowException();
	this->_sign = false;
}

Form::Form(const Form &form): _name(form._name), \
	_sign_grade(form._sign_grade), _exe_grade(form._exe_grade)
{
	if (this->_sign_grade < 1 || this->_exe_grade < 1)
		throw Form::GradeTooHighException();
	else if (150 < this->_sign_grade || 150 < this->_exe_grade)
		throw Form::GradeTooLowException();
	this->_sign = form._sign;
}

Form&	Form::operator=(const Form &form)
{
	if (this != &form)
	{
		if (this->_sign_grade == form._sign_grade && \
		this->_exe_grade == form._exe_grade)
			this->_sign = form._sign;
	}
	return *this;
}

Form::~Form(){}

std::string	Form::getName() const
{
	return this->_name;
}

bool		Form::getSign() const
{
	return this->_sign;
}

int			Form::getSigngrade() const
{
	return this->_sign_grade;
}

int			Form::getExegrade() const
{
	return this->_exe_grade;
}

void		Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->_sign_grade < 1 || this->_exe_grade < 1)
	{	
		throw Form::GradeTooHighException();
	}
	else if (150 < this->_sign_grade || 150 < this->_exe_grade)
	{
		throw Form::GradeTooLowException();
	}
	if (bureaucrat.getGrade() <= this->_sign_grade)
		this->_sign = true;
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return "Too high Form Grade";
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return "Too low Form Grade";
}

std::ostream &operator<<(std::ostream &ostrm, const Form &form)
{
	return ostrm << form.getName() << std::endl
				<< "Signed or unsigned = " << form.getSign() << std::endl
				<< "        Sign grade = " << form.getSigngrade() << std::endl
				<< "         Exe grade = " << form.getExegrade() << std::endl
				<< std::endl;
}
const char	*Form::GradeTooLowThanSignGradeException::what(void) const throw()
{
	return "Grade is lower than sign grade";
}

bool			Form::isSigngradeHighterThanGarade(Bureaucrat const &executor) const
{
	if (this->_sign_grade < 1 || this->_exe_grade < 1)
	{	
		throw Form::GradeTooHighException();
	}
	else if (150 < this->_sign_grade || 150 < this->_exe_grade)
	{
		throw Form::GradeTooLowException();
	}
	else if (this->_sign_grade < executor.getGrade())
	{
		std::cout << executor.getName() << " failed to execute the " << this->getName() << std::endl
				<< ", because Bureaucrat grade is lower than sign grade" << std::endl;
		return false;
	}
	else if (this->_exe_grade < executor.getGrade())
	{
		std::cout << executor.getName() << " failed to execute the " << this->getName() << std::endl
				<< ", because Bureaucrat grade is lower than execution grade" << std::endl;
		return false;
	}
	return true;
}

void	Form::execute(Bureaucrat const &executor) const
{
	(void)executor;
}

