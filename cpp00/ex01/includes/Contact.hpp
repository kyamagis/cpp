/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:08:41 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/10 12:14:40 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include<string>
#include<iostream>

class	Contact
{
	private:
		int			index;
		std::string first_name;
		std::string last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

	public :
		void		init_member(int idx);
		void		set_index(int idx);
		void		set_first_name(std::string first);
		void		set_last_name(std::string last);
		void		set_nickname(std::string nick);
		void		set_phone_number(std::string phone);
		void		set_darkest_secret(std::string secret);
		int			get_index();
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_phone_number();
		std::string	get_darkest_secret();
};

#endif