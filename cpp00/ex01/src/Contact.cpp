/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:28:08 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/10 12:15:35 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

void	Contact::init_member(int idx)
{
	index = idx;
	first_name = "Nothing";
	last_name = "Nothing";
	nickname = "Nothing";
	phone_number = "Nothing";
	darkest_secret = "Nothing";
}

void	Contact::set_index(int idx)
{
	index = idx;
}

void	Contact::set_first_name(std::string first)
{
	first_name = first;
}

void	Contact::set_last_name(std::string last)
{
	last_name = last;
}
		
void	Contact::set_nickname(std::string nick)
{
	nickname = nick;
}

void	Contact::set_phone_number(std::string phone)
{
	phone_number = phone;
}

void	Contact::set_darkest_secret(std::string secret)
{
	darkest_secret = secret;
}

int	Contact::get_index(void)
{
	return (index);
}

std::string	Contact::get_first_name()
{
	return (first_name);
}

std::string	Contact::get_last_name()
{
	return (last_name);
}

std::string	Contact::get_nickname()
{
	return (nickname);
}

std::string	Contact::get_phone_number()
{
	return (phone_number);
}

std::string	Contact::get_darkest_secret()
{
	return (darkest_secret);
}
