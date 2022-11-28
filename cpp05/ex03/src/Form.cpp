/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:16:36 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/18 20:37:05 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form(): name("The form"), sign_grade(1), exe_grade(1)
{
	this->sign = false;
}

Form::Form(const std::string &_name, const int &_sign_grade, const int &_exe_grade): \
	name(_name), sign_grade(_sign_grade), exe_grade(_exe_grade)
{
	if (sign_grade < 1 || exe_grade < 1)
		throw Form::GradeTooHighException();
	else if (150 < sign_grade || 150 < exe_grade)
		throw Form::GradeTooLowException();
	this->sign = false;
}

Form::Form(const Form &_form): name(_form.name), \
	sign_grade(_form.sign_grade), exe_grade(_form.exe_grade)
{
	if (sign_grade < 1 || exe_grade < 1)
		throw Form::GradeTooHighException();
	else if (150 < sign_grade || 150 < exe_grade)
		throw Form::GradeTooLowException();
	this->sign = false;
}

Form&	Form::operator=(Form &_form)
{
	if (this->sign_grade == _form.sign_grade && \
		this->exe_grade == _form.exe_grade)
		this->sign = _form.sign;
	return *this;
}

Form::~Form()
{
	
}

std::string	Form::getName() const
{
	return this->name;
}

bool		Form::getSign() const
{
	return this->sign;
}

int			Form::getSigngrade() const
{
	return this->sign_grade;
}

int			Form::getExegrade() const
{
	return this->exe_grade;
}

void		Form::beSigned(const Bureaucrat &_bureaucrat)
{
	if (sign_grade < 1 || exe_grade < 1)
	{	
		throw Form::GradeTooHighException();
		return ;
	}
	else if (150 < sign_grade || 150 < exe_grade)
	{
		throw Form::GradeTooLowException();
		return ;
	}
	if (_bureaucrat.getGrade() <= this->sign_grade)
		this->sign = true;
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return "Too high Form Grade";
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return "Too low Form Grade";
}

const char	*Form::GradeTooLowThanSignGradeException::what(void) const throw()
{
	return "Grade is lower than sign grade";
}

std::ostream &operator<<(std::ostream &ostrm, const Form &_form)
{
	return ostrm << _form.getName() << std::endl
				<< "Signed or unsigned = " << _form.getSign() << std::endl
				<< "        Sign grade = " << _form.getSigngrade() << std::endl
				<< "         Exe grade = " << _form.getExegrade() << std::endl
				<< std::endl;
}

bool			Form::isSigngradeHighterThanGarade(Bureaucrat const &executor) const
{
	if (this->sign_grade < 1 || this->exe_grade < 1)
	{	
		throw Form::GradeTooHighException();
		return false;
	}
	else if (150 < this->sign_grade || 150 < this->exe_grade)
	{
		throw Form::GradeTooLowException();
		return false;
	}
	else if (this->sign_grade < executor.getGrade())
	{
		std::cout << executor.getName() << " failed to execute the " << this->getName() << std::endl
				<< ", because Bureaucrat grade is lower than sign grade" << std::endl;
		return false;
	}
	else if (this->exe_grade < executor.getGrade())
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
